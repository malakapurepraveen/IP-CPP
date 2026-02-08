#include<iostream>
using namespace std;
class Print{
    public:
        void show(int a){
            cout<<"Integer: "<<a<<endl;
        }
        void show(double x){
            cout<<"Double: "<<x<<endl;
        }
};
int main(){
    // Print p;
    // p.show(5);
    // p.show(10.2);

    Print* p=new Print();
    p->show(5);
    p->show(5.3);
    return 0;
}