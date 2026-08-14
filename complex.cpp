# include <iostream>
using namespace std;
class comp{
    private:
    int real,img;

    public:
        void input(){
            cout<<"enter the number";
            cin>>real>>img;

        }
        void show(){
            cout<<real;
            if(img>0){
                cout<<"+"<<img<<"i"<<endl;
            }
            else{
                cout<<img<<"i"<<endl;
            }
        }
        void add(int a,int b ){
        
        }
        void add (comp p){
            real = real+p.real;
            img = img+p.real;


        }
};
int main(){
    comp c1,c2;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
}