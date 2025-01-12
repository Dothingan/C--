#include <iostream>
#include <vector>

using namespace std;

class Book
{
private:
    int book_id;
    string name;
    double price;
    int qtylnStock = 0;
public:
    Book(){
        book_id = 0;
        name = "";
        price = 0.0;
        qtylnStock = 0;
    }
    Book(int bid, string n, double pr, int qty){
        book_id = bid;
        name = n;
        price = pr;
        qtylnStock = qty;
    }

    void show() const{
        cout << "Book id:" << book_id << ", name:" << name << ", price:"<< price << ", So luong:" << qtylnStock << endl;
    } 

    friend void filter(vector<Book>& book);

    int getBookId() const { return book_id; }

};

void filter(vector<Book>& books) {
    bool found = false;
    for (const Book& b : books) {
        if (b.qtylnStock < 5) {
            cout << "Book id:" << b.book_id << ", name:" << b.name << ", price: " << b.price << ", Quantity: " << b.qtylnStock << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "khong tim thay sach so luong nho hon 5." << endl;
    }
}

void search(vector<Book>& books, const int& search_id) {
    bool found = false;
    for (const Book& b : books) {
        if (b.getBookId() == search_id) {
            cout << "id sach: \n";
            b.show();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "khong co cuon sahc voi id: " << search_id << endl;
    }
}


int main() {
    vector<Book> books; 

    books.push_back(Book(1, "C++ Programming", 99.9, 8));
    books.push_back(Book(2, "C Language", 99.9, 13));
    books.push_back(Book(3, "C# Programming", 99.0, 2));
    books.push_back(Book(4, "Python Programming", 99.9, 0));

    cout << "danh sach sach:\n";
    for (const Book& book : books) {
        book.show();
    }

    cout << "\nsach co so luong nho hon 5:\n";
    filter(books);

    int search_id;
    cout << "\nnhap id sach: ";
    cin >> search_id;
    search(books, search_id);

    return 0;
}

