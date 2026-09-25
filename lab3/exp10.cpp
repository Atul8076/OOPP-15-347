#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
    void input();
    void show();
};
inline void Point :: input(){
        cout<<"enter x : ";
        cin>>x;
        cout<<"enter y : ";
        cin>>y;
    }

inline void Point ::show() {
cout<<"X :"<<x<<endl;
cout<<"Y :"<<y<<endl;
}
int main(){
 Point p1,p2;
 p1.input();
 p2.input();
 p1.show();
 p2.show();
 
}