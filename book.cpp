#include<iostream>
using namespace std;

class Book{
    private: 
    string title;
    string author;

    public:
    Book (string t, string a){
        title=t;
        author=a;
    }
    void setTitle(string t){
        title=t;
    }
    void setAuthor(string a){
        author=a;
    }
    string getTitle(){
        return title;
    }
    string getAuthor(){
        return author;
    }
  
    void displayInfo(){
        cout<< "Title: "<<title<<endl;
        cout<< "Author: "<<author<<endl;

    }
};

int main(){
    Book book1 ("The C++ Programming Language", "Bjarne Stroustrup");
    book1.displayInfo();
    return 0;
}

