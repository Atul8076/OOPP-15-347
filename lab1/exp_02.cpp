#include<iostream>
using namespace std;

class Student{
    string name;
    int rollno;
    string branch;
    public:
    Student(string name,int rollno,string branch):name{name},rollno{rollno},branch{branch}{};
    void show(){
        cout<<"Student Name : "<<name<<endl;
        cout<<"Branch : "<<branch<<endl;
        cout<<"Roll number : "<<rollno<<endl;
    }
};

int main(){
Student S1("Ashwin Anand Sharma",337,"CSE");
Student S2("Ashutosh Yadav",334,"CSE");

S1.show();
S2.show();
}