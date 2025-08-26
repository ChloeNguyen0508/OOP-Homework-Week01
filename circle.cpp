#include<iostream>
#include<cmath>
using namespace std;

class Circle{
    private: 
    double radius;
    string color;

    public:
    Circle (double r, string c) {
        radius=r;
        color=c;
    }    
     Circle() {
        radius = 0;
        color = "none";
    }

    void setRadius(double r){
        radius=r;
    }
    void setColor(string c){
        color=c;
    }
    double getRadius(){
        return radius;
    }
    string getColor(){
        return color;
    }

    double circumference(){ //chu vi hinh tron
        return 2*M_PI*radius;

    }
    double area(){ // dien tich hinh tron
        return M_PI*radius*radius;
    }
    bool isValidRadius () {
        return radius>0;
    }

    void showColor(){
        cout<<"Màu của hình tròn: "<<color<<endl;
    }
    

};

int main(){
    Circle circle1; // dùng constructor mặc định

    double r;
    string c;

    cout << "Nhập bán kính hình tròn: ";
    cin >> r;
    circle1.setRadius(r);

    if (!circle1.isValidRadius()) {
        cout << "Bán kính không hợp lệ!" << endl;
        return 0;
    }

    cout << "Nhập màu sắc hình tròn: ";
    cin >> c;
    circle1.setColor(c);

    cout << "Chu vi hình tròn: " << circle1.circumference() << endl;
    cout << "Diện tích hình tròn: " << circle1.area() << endl;
    circle1.showColor();

    return 0;

}

