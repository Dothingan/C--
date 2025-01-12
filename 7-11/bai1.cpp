#include <iostream>
#include <vector>
#include <limits>

// Hàm tính giá thấp nhất, cao nhất và trung bình
void calculatePrices(const std::vector<double>& prices, double& minPrice, double& maxPrice, double& avgPrice) {
    if (prices.empty()) {
        std::cout << "Không có giá nào được nhập vào." << std::endl;
        return;
    }

    minPrice = std::numeric_limits<double>::max();
    maxPrice = std::numeric_limits<double>::lowest();
    double sum = 0.0;

    for (double price : prices) {
        if (price < minPrice) minPrice = price;
        if (price > maxPrice) maxPrice = price;
        sum += price;
    }
    
    avgPrice = sum / prices.size();
}

int main() {
    std::vector<double> prices;
    double price;

    std::cout << "Nhập giá của các sản phẩm (nhập giá trị âm hoặc bằng 0 để dừng):" << std::endl;

    // Nhập giá trị vào vector
    while (true) {
        std::cout << "Nhập giá sản phẩm: ";
        std::cin >> price;

        if (price <= 0) break;
        prices.push_back(price);
    }

    double minPrice, maxPrice, avgPrice;

    // Gọi hàm để tính toán
    calculatePrices(prices, minPrice, maxPrice, avgPrice);

    // Hiển thị kết quả
    if (!prices.empty()) {
        std::cout << "Giá thấp nhất: " << minPrice << std::endl;
        std::cout << "Giá cao nhất: " << maxPrice << std::endl;
        std::cout << "Giá trung bình: " << avgPrice << std::endl;
    } else {
        std::cout << "Không có giá hợp lệ nào để tính toán." << std::endl;
    }

    return 0;
}
