#include<iostream>
using namespace std;
class human {
    protected:
    string name;
    int age;
    public:
    human (string name, int age) : name{name},age{age}{}
};
class student : public human{
    private :
    int roll , fees;

    public:
    student(string name, int age, int roll , int fees) : human(name, age) , roll{roll},fees{fees}{}
    void display(){
        cout<<name << " "<< age<<" "<< roll<< " "<< fees<<endl;
    }
    
};
int main(){
student a("atul",18,23455,353243);
a.display();
    return 0;
}