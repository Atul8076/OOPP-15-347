#include<iostream>
using namespace std;

int main(){
int salary = 1200;
int *newSalary = &salary;
*newSalary = salary +salary/10;
cout<<salary<<endl;
    return 0;
}