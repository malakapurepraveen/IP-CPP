#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student:public Person{
    public:
    int rollNum;
        void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll_num:"<<rollNum<<endl;
        
        }
    
};
class Teacher:public Person{
    public:
    string subject;
        void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Subject:"<<subject<<endl;
        }
};
int main(){
    Teacher t1;
    Student s1;

    t1.name="Praveen";
    t1.age=26;
    t1.subject="Physics";
    t1.getInfo();
    
    s1.name="Praveen";
    s1.age=26;
    s1.rollNum=265;
    s1.getInfo();


}
