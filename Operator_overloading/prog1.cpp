#include<iostream>
using namespace std;
class Complex{
    int real , img;
    public:
    Complex(int r = 0, int i = 0): real{r},img{i}{}
    void show(){
        cout<<real<<","<<img<<endl;
    }
    // Complex operator + (Complex c){
    //     return Complex(real + c.real, img + c.img);
    // }
    // friend Complex operator + (Complex c,Complex d);
     friend Complex operator + (Complex c,int x);   
};
// Complex operator + (Complex c , Complex d){
//     return Complex(c.real + d.real , c.img+d.img);
// }


int main(){
    Complex c1{5,10},c2{10,20},c3,c4;
    // c3 = c1+c2;
    c1.show();
    c2.show();
    c3.show();
    c4 = c3+5;
    c4.show();
    return 0;
}