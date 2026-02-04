//Virtual Function- is member function that expect to be redefined in derived class.

#include<iostream>
using namespace std;
class Base{
    public:
    virtual void hello(){
        cout<<"Parent Class\n";
    }
};
class Derived:public Base{
    public:
    void hello(){
        cout<<"Child Class\n";
    }
};


int main(){

    Derived d1;
    d1.hello();
    return 0;

}