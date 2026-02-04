// #include<iostream>
// using namespace std;
// class Base{
//     public:
//     Base(){
//         cout<<"Base constructor"<<endl;

//     }
//     ~Base(){
//         cout<<"Base Destructor"<<endl;
//     }

// };
// class Derived:public Base{
//     public:
//     Derived(){
//         cout<<"Derived Constructor"<<endl;
//     }
//     ~Derived(){
//         cout<<"Derived Destructor"<<endl;
//     }

// };
// int main(){

//     Base* b=new Derived();
//     delete b;                 //In this case derived destructor is not called only base destructor is called ->this could lead to memory leak
//     // Derived d;
//     return 0;    
// }


///solution


#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Base constructor"<<endl;

    }
    virtual ~Base(){       // Always make base Destructor virtual if the class is used polymorphically
        cout<<"Base Destructor"<<endl;
    }

};
class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived Constructor"<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructor"<<endl;
    }

};
int main(){

    Base* b=new Derived();
    delete b;                 //In this case derived destructor is not called only base destructor is called ->this could lead to memory leak (Memory allocated in derived will leak)
    
    return 0;    
}