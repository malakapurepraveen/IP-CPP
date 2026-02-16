// #include<iostream>
// #include<string>
// using namespace  std;

// class Shape{
//     public:
//         virtual void draw()=0;
// };
// class Circle:public Shape{
//     public:
//     void draw(){
//         cout<<"Drawing Circle"<<endl;
//     }

// };
// class Ractangle:public Shape{
//     public:
//     void draw(){
//     cout<<"Drawing rectangle"<<endl;
//     }
// };

// int main(){

//     string type;
//     cin>>type;
//     Shape *shape=nullptr;
//     //clint decides object creation

//     if(type=="circle"){
//         shape=new Circle();
//     }
//     else if(type=="rectangle"){
//         shape=new Ractangle();
                  
//     }
//     if(shape)
//         shape->draw();
//     return 0;
// }


// /***************************with factory design pattern*****************/
// #include<iostream>
// #include<string>
// using namespace  std;

// class Shape{
//     public:
//         virtual void draw()=0;
// };
// class Circle:public Shape{
//     public:
//     void draw(){
//         cout<<"Drawing Circle"<<endl;
//     }

// };
// class Ractangle:public Shape{
//     public:
//     void draw(){
//     cout<<"Drawing rectangle"<<endl;
//     }

// };
// class ShapeFactory{
// public:
//     static Shape* createShape(string type){
//         if(type=="circle"){
//             return new Circle();
//     }
//     else if(type=="rectangle"){
//             return new Circle();
                  
//     }
//     return nullptr;

//     }
// };

// int main(){

//     string type;
//     cin>>type;
//     Shape *shape=ShapeFactory::createShape(type);

//     if(shape)
//         shape->draw();
//     return 0;
// }


// /******************Vechile example*********************/

// #include<iostream>
// #include<string>
// using namespace std;

// class Vechile{
//     public:
//     virtual void drive()=0;
//     virtual ~Vechile(){}
// };
// class Car:public Vechile{
//     public:
//         void drive(){
//             cout<<"creating car"<<endl;
//         }
// };
// class Bike:public Vechile{
//     public:
//         void drive(){
//             cout<<"Creating bike"<<endl;
//         }
// };
// class VechileFactory{
//     public:
//     static Vechile* creteVechile(string vechileType){
//         if(vechileType=="bike")
//             return new Bike();
//         else if(vechileType=="car")
//             return new Car();
//         return nullptr;
//     }

// };

// int main(){

//     string vechileType;
//     cin>>vechileType;
//     Vechile *vechile=VechileFactory::creteVechile(vechileType);
//     if(vechile)
//         vechile->drive();
    
//     delete vechile;
//     return 0;
// }


#include<iostream>
#include<string>
#include<memory>
using namespace std;

class Vechile{
    public:
        virtual void drive()=0;
        virtual ~Vechile(){}

};
class Car:public Vechile{
    public: 
        void drive() override{
            cout<<"Creating Car"<<endl;
        }
};
class Bike:public Vechile{
    public:
        void drive() override{
            cout<<"Creaing Car"<<endl;
        }
};

class VechileFactory{
    public:
        // static vechile* createVechile(const string& s){
        static unique_ptr<Vechile> createVechile(const string& s){
            if(s=="bike")
                return make_unique<Car>();
            else if(s=="car"){
                // return new Car();
                  return make_unique<Car>();

            return nullptr;
            }
        }
};
int main(){
    string s;
    cout<<"Enter the vechile to create: ";
    cin>>s;
    // Vechile* vechile=VechileFactory::createVechile(s);
    unique_ptr<Vechile> vechile=VechileFactory::createVechile(s);
    if(vechile){
        vechile->drive();
    }
    delete vechile;
    return 0;
}