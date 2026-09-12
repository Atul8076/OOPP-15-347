# include <bits/stdc++.h>
using namespace std;
class student{
    private:
        string name;
        int roll;
        static int total_students;
        public:


        student(string name , int roll) : name{name},roll{roll}{total_students++;} 

        // static member function

        static void get_total(){
            cout<<"total students is " <<total_students<<endl;
        }
        void display_total(){
            cout<<total_students<<endl;
        }

};

int student :: total_students = 0;

int main(){
student first("atul yadav",1);
student second("aryan ",2);
first.display_total();
student third("ashutosh",3);
third.display_total();
student fourth("saurabh ",123);

// direct access member function 
student :: get_total();
}