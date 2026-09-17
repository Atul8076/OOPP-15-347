#include<iostream>
using namespace std;
class Engineer{
    public:
    string specialization ;
    
    void work(){
        cout<<"i have specialization in "<<specialization<<endl;
    }
};
class youtuber{
    public:
    int subscriber;

    void sub(){
        cout<<"i have subscriber"<<subscriber<<endl;
    }
};
class student : public Engineer , public youtuber{
    public :
    string name;

    student(string name, string specialization, int follower){
        this->name = name ;
        this->specialization = specialization;
        subscriber = follower;
    }
    void show(){
        cout<<"my name is "<<name<<endl;
        work();
        sub();
        
    }
};
int main(){
    student A1( "atul yadav", "cse",12345);
    A1.show();

    return 0;
}