#include<iostream>
using namespace std;    

class Person{
        string name;
        int age;
        string address;
        string phoneNumber; 
    public:
    
    Person(string n, int a, string ad, string p){
        name=n;
        age=a;
        address=ad;
        phoneNumber=p; 
    }

    void setName(string n){
        name=n;
    }
    void setAge(int a){
        age=a;
    }
    void setAddress(string ad){
        address=ad;
    }
    void setPhoneNumber(string p){
        phoneNumber=p;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getAddress(){
        return address;
    }
    string getPhoneNumber(){
        return phoneNumber;
    }

    void displayInfo(){
        cout<< "Name: "<<name<<endl;
        cout<< "Age: "<<age<<endl;
        cout<< "Address: "<<address<<endl;
        cout<< "Phone Number: "<<phoneNumber<<endl;
    }
    bool isAdult(){
        return age>=18;
    }
    void move (string newAddress){
        address=newAddress;
    }
    void greet (){
        cout<<"Hello, my name is "<<name<<endl;
    }
};

int main(){
    Person person1("John Doe",20,"123 Main St","555-1234");
    
    person1.displayInfo();
    if(person1.isAdult()){
        cout<<"This person is an adult."<<endl;
    }else{
        cout<<"This person is not an adult."<<endl;
    }
    person1.move("456 Elm St");
    cout<<"After moving, the new address is: "<<person1.getAddress()<<endl;

    return 0;
}
