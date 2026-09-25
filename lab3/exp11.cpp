#include<iostream>
using namespace std;
inline int addition(int a = 0 , int b = 0){
    return a+b;
}
inline float addition(float a = 0.0f , float b = 0.0f){
    return a+b;
}
int main(){
    int a = addition(2,3);
    auto b = addition(2.3f,4.3f);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}