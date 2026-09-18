#include<iostream>
using namespace std;
int fun1(int &x){
    x = x+x/10;
    return x;
}
int fun2(int *x){
    *x = *x+(*x/10);
    return *x;
}
int main(){
int salary;
cout<<"enter the salary "<<endl;
cin>>salary ;
fun1(salary);
int *newsalary = &salary ;
fun2(newsalary);
    return 0;
}