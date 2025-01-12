int main() {
    int n;
    cin >> n;

    int chieucao[100000], sapxepcc[100000];
    for (int i = 0; i < n; i++) {
        cin >> *(chieucao + i); // Sử dụng con trỏ để nhập chiều cao
        *(sapxepcc + i) = *(chieucao + i); // Sao chép vào mảng phụ bằng con trỏ
    }

    // Sắp xếp mảng phụ
    sort(sapxepcc, sapxepcc + n);

    for (int i = 0; i < n; i++) {
        // Tìm vị trí của *(chieucao + i) trong mảng sapxepcc bằng con trỏ
        int *pos = lower_bound(sapxepcc, sapxepcc + n, *(chieucao + i));
        int count = pos - sapxepcc; // Tính số học sinh thấp hơn dựa trên vị trí con trỏ
        cout << count << " ";
    }

    return 0;
}