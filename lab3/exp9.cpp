#include <iostream>
using namespace std;

class Time {
    int hh, mm, ss;

public:
    void input(int h , int m , int s);
    void show();
};
void Time :: input(int h = 0,int m =0, int s=0){
        hh = h;
        mm = m;
        ss = s;
}
void Time :: show(){
    cout<<hh<<":" <<mm<<":"<<ss<<endl;
}
int main() {
    Time t1, t2;
    t1.input(10, 25, 30);
    t2.input(15, 40, 50);

    t1.show();
    t2.show();
   
}