//constructor overloading and function overloading
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;

    Student(){                              //constructor overloading
        cout<<"Non-parameterized Constuction"<<endl;

    }
    Student(string name){                 //constructor overloading
        this->name=name;
        cout<<"Parameterized Constuction"<<endl;
    }

    void show(int x){                      //Function Overloading
        cout<<x<<endl;
    }                                               
    void show(char x){                      //Function Overloading
        cout<<x<<endl;
    }
};
int main(){
    // Student s1;
    Student s1("name");
    s1.show(21);
    s1.show('a');
    return 0;


}