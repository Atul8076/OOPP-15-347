# include <bits/stdc++.h>
using namespace std;
class student{
    private:
        string name;
        int roll;

        public:
                static int total_students;

        student(string name , int roll) : name{name},roll{roll}{total_students++;} 

        void display_total(){
            cout<<total_students<<endl;
        }

};

int student :: total_students = 0;

int main(){
student first("atul yadav",1);
student second("aryan ",2);
first.display_total();
second.display_total();
student third("ashutosh",3);
third.display_total();
cout<<student :: total_students<<endl;

student :: total_students = 10;
cout<<student :: total_students<<endl;
student fourth("saurabh ",123);
fourth.display_total();
}



// There are two essential rules to directly access a static data member without creating an object:

//The static variable must be declared public inside the class (if it is private, direct external access is not permitted).

 //It must be accessed using the Scope Resolution Operator (::): ClassName::variableName.