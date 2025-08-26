#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    double salary;

    public:
    Employee(string n,double s){
        name=n;
        salary=s;
    }
    void setName(string n){
        name=n;
    
    }   
    void setSalary(double s){
        salary=s;
    }
    string getName(){
        return name;
    }
    double getSalary(){
        return salary;
    }


    void displayInfo(){
        cout<< "Name: "<<name<<endl;
        cout<< "Salary: "<<salary<<endl;

    }
};

int main(){
    Employee emp1 ("ALice",50000);
    emp1.displayInfo();
    return 0;
}

/*
code chạy đúng, không có lỗi cú pháp.
Khi chạy, chương trình sẽ in ra thông tin về tên và lương của nhân viên
Cấu trúc lớp đúng.
Không tìm thấy lỗi logic.
Có thể áp dụng cách tính thuế thu nhập cá nhân dựa trên mức lương bằng cách thêm một phương thức để tính toán số tiền thuế dựa trên mức lương hiện tại.
Có thể thêm số năm kinh nghiệm và id của nhân viên để xác định vị trí và thâm niên của nhân viên trong công ty.
*/