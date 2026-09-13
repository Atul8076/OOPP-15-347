#include<iostream>
using namespace std;
class humans{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

        // with help of member function we can access private and protected 
        void fun(){
            a= 01;
            b = 20;
            c = 30;
        }

};
int main(){
    humans atul;
    // cout<<atul.a;   ❌ in main we cannot access protected and  private member directly
    cout<<atul.c;
    return 0;
}