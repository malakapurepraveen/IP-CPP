#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        cout<<"Base Constructor"<<endl;
        this->name=name;
        this->age=age;
    }
    ~Person(){
        cout<<"Base destructor"<<endl;
        
    }
    
};
class Student:public Person{
    public:
    int roll_num;
    
    
    
    Student(string name,int age, int roll_num):Person(name,age){
        cout<<"Derived Constructor"<<endl;
        this->roll_num=roll_num;
        
    }
    ~Student(){
        cout<<"Derived destructor"<<endl;
    }
    void getInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll_num<<endl;
    }
    
};


int main(){
    Student s1("praveen",24,48);
    s1.getInfo();
    
}