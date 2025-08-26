#include<iostream>
using namespace std;

class Laptop{
    private: 
    string brand;
    string model;
    int ram;
    int storage;
    string gpu;


    public:
    Laptop(string b, string m, int r, int s, string g){
        brand = b;
        model = m;
        ram = r;
        storage = s;
        gpu = g;
    }

    void setBrand(string b){
        brand = b;
    }
    void setModel(string m){
        model = m;
    }
    void setRam(int r){
        ram = r;
    }
    void setStorage(int s){
        storage = s;
    }
    string getBrand(){
        return brand;
    }
    string getModel(){
        return model;
    }
    int getRam(){
        return ram;
    }
    int getStorage(){
        return storage;
    }


    void displayInfo(){
        cout<< "Brand: "<<brand<<endl;
        cout<< "Model: "<<model<<endl;
        cout<< "RAM: "<<ram<<" GB"<<endl;
        cout<< "Storage: "<<storage<<" GB"<<endl;

    }

    void checkRam(int requiredRAM){
        if(ram>= requiredRAM) {
            cout<<"This laptop has enough RAM to run the software."<<endl;
        }else{
        cout<<"This laptop does not have enough RAM to run the software."<<endl;
         }
    }
    void checkGPU(string requiredGPU){
        if(gpu == requiredGPU) {
            cout<<"This laptop has the required GPU."<<endl;
        }else{
        cout<<"This laptop does not have the required GPU."<<endl;
         }
    }
};

int main(){
    Laptop laptop1 ("Dell", "XPS 13", 8, 256, "Intel Iris Xe");
    

    laptop1.displayInfo();
    laptop1.checkRam(16); // kiểm tra xem laptop có đủ RAM để chạy phần
    laptop1.checkGPU("NVIDIA GeForce GTX 1650"); // kiểm tra xem laptop có GPU cần thiết hay không
    return 0;
}




