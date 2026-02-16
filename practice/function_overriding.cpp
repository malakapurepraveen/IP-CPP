
#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(int a){
        cout<<"This is base class show():"<<a<<endl;
    }
};
class Derived:public Base{
    public:
    void show(int a) override{
        cout<<"This is derived class show(int)"<<a<<endl;
    }


};
int main(){
    // Base* b;
    // Derived d;
    // b = &d;
    // b->show(10);

    // Derived d;
    // Base& b=d;
    // b.show(5);

    Derived d;
    Base* b = &d;
    b->show(5);  // Derived::show
    

    return 0;
}