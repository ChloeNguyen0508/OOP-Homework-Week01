#include<iostream>
using namespace std;

class Account{
    private:
    string accountNumber; // số tài khoản
    double balance; // số dư tài khoản
    string ownerName; // tên chủ tài khoản

    public:
    // Constructor
    Account(string a, double b, string o){
        accountNumber=a;
        balance=b;
        ownerName=o;

    }
    // Setters and Getters
    void setAccountNumber(string a){
        accountNumber=a;
    }

    void setBalance(double b){
        balance=b;
    }

    void setOwnerName(string o){
        ownerName=o;
    }

    string getAccountNumber(){
        return accountNumber;
    }
    double getBalance(){
        return balance;
    }
    string getOwnerName(){
        return ownerName;
    }

    // Nạp tiền vào tài khoản
    void deposit(double amount){ 
        balance += amount;
        cout<<"Deposited: "<<amount<<endl;
    
    }

    // rút tiền từ tài khoản 
    void withdrae (double amount){ 
        if(amount>balance){ // kiểm tra số dư tài khoản so với số tiền muốn rút
            cout<< "Insufficient balcance!"<<endl;
        }
        else{
            balance-=amount; // trừ số tiền muốn rút khỏi số dư tài khoản
            cout<<"Withdrew: "<<amount<<endl;
        }
    }

    // Hiển thị số dư tài khoản, tên chủ tài khoản và số tài khoản
    void displayBalance(){ 
        cout<< "Account Number: " <<accountNumber<<endl;
        cout<< "Owner Name: " <<ownerName<<endl;
        cout<< "Current balance: " <<balance<<endl;
    }

    // Giới hạn số tiền rút tối thiểu là 100.000 VND
    void withdraw(double amount) {
        double minimumBalance=100000; // số dư tối thiểu
        if(balance-amount<minimumBalance) {
            cout<<"Cannot withdraw this amount, minimum balance must be maintained!"<<endl;
        } else {
            balance -= amount;
            cout<<"Withdrew: "<<amount<<" VND"<<endl;
        }
    }
};

int main() {
    Account acc1 ("123456789", 1000.0, "John Doe"); // tạo đối tượng tài khoản với số tài khoản, số dư và tên chủ tài khoản
    
    
    acc1.displayBalance();
    acc1.deposit(500.0);    
    acc1.displayBalance();
    acc1.withdrae(200.0);
    acc1.displayBalance();
    acc1.withdrae(1500.0); // thử rút tiền vượt quá số dư
    acc1.displayBalance();
    return 0;
}

