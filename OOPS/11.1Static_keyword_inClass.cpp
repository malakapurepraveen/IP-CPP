#include<iostream>
using namespace std;
class ABC{
    public:
    static int x;       //as static variable in calss is inialized only oncee in progra. and that variable is shared among all the object created from ABC class
};
int ABC::x = 100; 
int main(){
    ABC obj1,obj2;
    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;
    obj1.x=500;
    obj2.x=600;
    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;

    ABC::x=700;
    cout<<ABC::x<<endl;

}