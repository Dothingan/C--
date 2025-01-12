/*Viết một chương trình C++ để hiển thị một menu cho phép người dùng lựa chọn hoặc quan sát tất cả bản ghi của sinh viên hoặc 
chỉ quan sát các bản ghi của một sinh viên cụ thể bởi lựa chọn id của sinh viên đó.

==========================================================

MENU
==========================================================

1. Quan sat tat ca ban ghi cua sinh vien

2. Quan sat mot ban ghi cua sinh vien boi ID

3. Hien thi diem thi cuoi ky cao nhat va thap nhat

Nhap lua chon cua ban (1-3): 1

|ID | Kiemtra1 | Kiemtra2 | Giuaky | Cuoiky

| ==================================================

|1232 | 10 | 23 | 45 | 56 |

|2343 | 45 | 43 | 24 | 78 |

|2343 | 34 | 45 | 45 | 45 |

|3423 | 67 | 6 | 65 | 56 |*/

#include <iostream>
#include <vector>
#include <string>

struct Student {
    int id;
    int test1;
    int test2;
    int midterm;
    int finalExam;
};

void displayAllRecords(const std::vector<Student>& students) {
    std::cout << "==========================================" << std::endl;
    std::cout << "| ID    | Kiemtra1 | Kiemtra2 | Giuaky | Cuoiky |" << std::endl;
    std::cout << "==========================================" << std::endl;
    for (const auto& student : students) {
        std::cout << "| " << student.id
                  << "    | " << student.test1
                  << "        | " << student.test2
                  << "        | " << student.midterm
                  << "    | " << student.finalExam << "    |" << std::endl;
    }
    std::cout << "==========================================" << std::endl;
}

void displayRecordById(const std::vector<Student>& students, int id) {
    bool found = false;
    for (const auto& student : students) {
        if (student.id == id) {
            std::cout << "==========================================" << std::endl;
            std::cout << "| ID    | Kiemtra1 | Kiemtra2 | Giuaky | Cuoiky |" << std::endl;
            std::cout << "==========================================" << std::endl;
            std::cout << "| " << student.id
                      << "    | " << student.test1
                      << "        | " << student.test2
                      << "        | " << student.midterm
                      << "    | " << student.finalExam << "    |" << std::endl;
            std::cout << "==========================================" << std::endl;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Khong tim thay sinh vien voi ID: " << id << std::endl;
    }
}

void displayMinMaxFinal(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "Khong co du lieu de hien thi." << std::endl;
        return;
    }
    int maxScore = students[0].finalExam;
    int minScore = students[0].finalExam;

    for (const auto& student : students) {
        if (student.finalExam > maxScore) maxScore = student.finalExam;
        if (student.finalExam < minScore) minScore = student.finalExam;
    }

    std::cout << "Diem cuoi ky cao nhat: " << maxScore << std::endl;
    std::cout << "Diem cuoi ky thap nhat: " << minScore << std::endl;
}

int main() {
    std::vector<Student> students = {
        {1232, 10, 23, 45, 56},
        {2343, 45, 43, 24, 78},
        {3456, 34, 45, 45, 45},
        {4567, 67, 6, 65, 56},
    };

    int choice;
    do {
        std::cout << "==========================================================" << std::endl;
        std::cout << "MENU" << std::endl;
        std::cout << "==========================================================" << std::endl;
        std::cout << "1. Quan sat tat ca ban ghi cua sinh vien" << std::endl;
        std::cout << "2. Quan sat mot ban ghi cua sinh vien boi ID" << std::endl;
        std::cout << "3. Hien thi diem thi cuoi ky cao nhat va thap nhat" << std::endl;
        std::cout << "4. Thoat" << std::endl;
        std::cout << "Nhap lua chon cua ban (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                displayAllRecords(students);
                break;
            case 2: {
                int id;
                std::cout << "Nhap ID cua sinh vien: ";
                std::cin >> id;
                displayRecordById(students, id);
                break;
            }
            case 3:
                displayMinMaxFinal(students);
                break;
            case 4:
                std::cout << "Thoat chuong trinh." << std::endl;
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long thu lai." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
