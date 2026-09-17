#include<iostream>
using namespace std;
class Complex{
    int real, img;

    public:
    Complex(){

    }
    Complex(int real,int img  ){
        this->real = real;
        this->img = img;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
    // Complex operator +(Complex &C){
    //     Complex ans;
    //     ans.real = real + C.real;
    //     ans.img = img + C.img;
    //     return ans;
    // }
Complex operator +(int x){
    Complex ans ;
    ans.real = real + x;
    ans.img = img;
    return ans;
}
};
int main(){
    Complex C1(4,5),C2(3,4);
    // Complex C3 = C1+C2;
    // C3.display();

    Complex C4 ;
    C4 = C2+5;
    C4.display();
    return 0;
}