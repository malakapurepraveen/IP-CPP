#include<iostream>
using namespace std;


// class Car{
//     public:
//         void start(){   //essential feature
//             engineStart();   //Hidden implimentation
//         }
//     public:
//         void engineStart(){      //hidden from user
//             cout<<"Starting Engine"<<endl;
//         }
// };
// int main(){

//     Car c1;
//     c1.start();
//     return 0;
// }

//abstaraction is implementated using 
//1.class
//2.access specifier
//3.abstract class
//4.pure virtual function


// class Shape{
//     virtual void draw()=0;

// };
// class Rectangle:public Shape{
//     public:
//     void draw(){
//         cout<<"Drawing the circle"<<endl;
//     }
// };

// int main(){
//     Rectangle r1;
//     r1.draw();
//     return 0;
// }


//Shape provides only implemnr=tation, not implementation
//child class provides actual logic ->abstraction


#include<memory>
class Shape{
    public:
    virtual void draw()=0;

    virtual ~Shape(){
        cout<<"Shape distructor is called"<<endl;
     }
};
class Circle : public Shape{
    public:
     ~Circle(){
        cout<<"Circle distructor is called"<<endl;
        // delete this;    //avoid deletethis this pointer inside distructor when delete s1 run from line number 75 destructor willl call again dlete this means again destructor will be called leads to undefined behaviout/recursion
     }
    void draw(){
        cout<<"Drawing the circle"<<endl;
    }
};
int main(){

    // Shape* s1=new Circle();
    unique_ptr<Shape> s1=make_unique<Circle>();
    s1->draw();
    // delete s1;
    return 0;
}

// class Shape {
// public:
//     Shape* ptr;

//     virtual ~Shape() {
//         delete ptr;   // ❌ Wrong ownership
//     }
// };
// Why wrong?

// Destructor deleting memory it didn’t allocate

// Breaks ownership principle

// “If a class has any virtual function, it should have a virtual destructor.”

