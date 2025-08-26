#include <iostream>
using namespace std;

class Car{
    private:
    string brand;
    int year;
    public:
    Car(string b,int y){
        brand=b;
        year=y;
    }
    void setBrand(string b) { // thay đổi giá trị
        brand=b;
    }
    void setYear(int y){
        year=y;
    }

    string getBrand(){
        return brand;
    }

    void displayInfo(){
        cout<< "brand: "<<brand<<endl;
        cout<< "Year: "<<year<<endl;


    }

};

int main(){
    
    Car car1 ("Toyota",2020);
    car1.setBrand("honda");
    car1.displayInfo();
    return 0;
}
