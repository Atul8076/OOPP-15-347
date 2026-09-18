#include<iostream>
using namespace std;
int main(){

int salary;
cout<<"enter the salary"<<endl;
cin>>salary;
int &newSalary = salary;
newSalary = newSalary+newSalary/10;
cout<<salary;    
    return 0;
}
