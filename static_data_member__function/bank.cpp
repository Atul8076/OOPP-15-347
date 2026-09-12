#include<iostream>
using namespace std;
class customer{
    private :

        string name;
        int account_number , balance ;
        static int  total_customer;
        static int total_balance ;

        public :
            
            customer(string s, int a, int b): name{s},account_number{a},balance{b}{
                total_customer++;
                total_balance+= balance;
            }
            void deposit(int amount){
                if(amount>0){
                        balance+= amount;
                        total_balance+= amount;
                }
            }
            void withdraw(int amount){
                if(amount<=balance && amount>0){
                    balance-= amount;
                    total_balance-= amount;
                }
            }
            static void display(){
                cout<<"total customer "<<total_customer<<endl;
                cout<<"total balance "<<total_balance<<endl;
            }

};
int customer :: total_customer = 0;
int customer :: total_balance = 0;

int main(){
    customer first("atul",123,1000);
    customer second("ashish",234,2000);
    customer third("harsh",234,1500);
    customer:: display();
    first.deposit(1000);
    second.withdraw(200);
    customer:: display();
    return 0;
}