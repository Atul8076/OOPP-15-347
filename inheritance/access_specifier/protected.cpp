#include<iostream>
using namespace std;
class human {
    public:
        string name;
        int age , weight ;

};
class student : protected human{
    private :
    int roll , fees;
};
int main(){
student a;
// a.name = "atul";    ❌ 
    return 0;
}