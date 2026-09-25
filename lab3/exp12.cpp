#include<iostream>
using namespace std;
void area(double radius){
    cout<<"area of circle"<<":"<<3.14*radius*radius<<endl;
}
void area(double length , double width){
    cout<<"area of rectangle :"<<length*width<<endl;
}
void area(int side){
    cout<<"area of square :"<<side*side<<endl;
}
void area(double base , double height , bool triangle){
    if(triangle == 0){
        return area(base, height);
    }else{
    cout<<"area of triangle "<<0.5*(base*height)<<endl;
    }
}
int main(){
    area(5.0);
    area(5.0,10.0);
    area(5);
    area(5.0,5.0,0);
    return 0;
}