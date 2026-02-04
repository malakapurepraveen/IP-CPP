#include<iostream>
using namespace std;

class Shape{
    virtual void draw()=0;   //pure virtual function and if you wan to create abstract class that class must be contain pure virtual function
    //you cannot create object of abstarct class
};
class Circle:public Shape{
    public:  
    void draw(){           //derived class must implement pure virtual function otherwise derived class become abstarct. 
        cout<<"Drawing a circle";   
    }
};
int main(){

    // Shape s1;    //canot create object of abstarct class
    Circle c1;
    c1.draw();


    return 0;
}