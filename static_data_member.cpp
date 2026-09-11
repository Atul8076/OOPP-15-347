# include <iostream>
using namespace std;
class customer{
    string name;
    int account_number, balance;
    // static int  total_customer;

    public:

    // for direct access we create static member in public
    static int  total_customer;
        customer(string s, int a, int b): name{s},account_number{a},balance{b}{total_customer++;}

        
        void display_total_customer(){
            cout<<total_customer;
        }


};
int customer :: total_customer = 0; 
int main(){
    customer A1("ABCD",1234,100 );
    A1.display_total_customer();
    customer A2("ATUL",1235,200);
    A1.display_total_customer();
    customer :: total_customer = 5;
    
}