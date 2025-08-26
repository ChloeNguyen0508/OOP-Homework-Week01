#include<iostream>
using namespace std;

class Course{
    private:
    string courseName;
    string courseCode;
    int credits;
    string instructorName;

    public:
    Course(string cn, string cc, int cr, string i ) {
        courseName=cn;
        courseCode=cc;
        credits=cr;
        instructorName=i;
    }
    void setCourseName(string cn){
        courseName=cn;
    }
    void setCourseCode(string cc){
        courseCode=cc;
    }
    void setCredits(int cr){
        credits=cr;
    }
    void setInstructorName(string i){
        instructorName=i;
    }

    string getCourseName(string cn){
        return courseName;
    }
    string getCourseCode(string cc){
        return courseCode;
    }
    int getCredits(int cr){
        return credits;
    }
    string getInstructorName(string i){
        return instructorName;
    }
    
    void displayInfo(){
        cout<< "Course Name: "<<courseName<<endl;
        cout<< "Course Code: "<<courseCode<<endl;
        cout<< "Credits: "<<credits<<endl;
        cout<< "Instructor Name: "<<instructorName<<endl;
    }

    bool isHighCredit(){
        return credits>3;
    }
    void isLabRequired(double LabRequired){
        if (credits>= LabRequired) {
            cout<<"Need to have a lab to study!";
        }
    } 
};

int main(){
    Course course1 ("Object Oriented Progamming", "CS202", 4,"Huynh Xuan Phung");
    
    course1.displayInfo();
    if(course1.isHighCredit()){
        cout<<"This is a high credit course."<<endl;
    }else{
        cout<<"This is not a high credit course."<<endl;
    }
    course1.isLabRequired(4);
    cout<<endl;
    return 0;
}

