#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee {
    private:
        string name; 
        int age;  
        double salary; 

    public:
        void setName(const string& n) { name = n; }
        string getName() const { return name; }

        void setAge(int a) { age = a; }
        int getAge() const { return age; }

        void setSalary(double s) { salary = s; }
        double getSalary() const { return salary; }
};

int main() {
    vector<Employee> employees;
    string name;
    int age;
    double salary;

    while (true) {
        cout << "Nhập tên nhân viên: ";
        getline(cin, name);

        cout << "Nhập tuổi nhân viên: ";
        cin >> age;

        cout << "Nhập mức lương nhân viên: ";
        cin >> salary;

        if (salary == -1) break;

        Employee emp;
        emp.setName(name);
        emp.setAge(age);
        emp.setSalary(salary);

        employees.push_back(emp);

        cin.ignore();
    }

    double salaryThreshold;
    cout << "Nhập mức lương để tìm nhân viên có mức lương cao hơn: ";
    cin >> salaryThreshold;

    cout << "Những nhân viên có mức lương cao hơn " << salaryThreshold << " là:\n";
    for (const auto& emp : employees) {
        if (emp.getSalary() > salaryThreshold) {
            cout << "Tên: " << emp.getName() 
                 << ", Tuổi: " << emp.getAge()
                 << ", Mức lương: " << emp.getSalary() << endl;
        }
    }

    if (!employees.empty()) {
        const Employee* highestPaid = &employees[0];
        for (const auto& emp : employees) {
            if (emp.getSalary() > highestPaid->getSalary()) {
                highestPaid = &emp;
            }
        }

        cout << "\nNhân viên có mức lương cao nhất là:\n";
        cout << "Tên: " << highestPaid->getName() 
             << ", Tuổi: " << highestPaid->getAge()
             << ", Mức lương: " << highestPaid->getSalary() << endl;
    } else {
        cout << "Không có nhân viên nào trong danh sách.\n";
    }

    return 0;
}
