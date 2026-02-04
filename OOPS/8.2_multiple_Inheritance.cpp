#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

};
class Student{
    public:
    int rollNum;
};
class Teacher{
    public:
    string subject;
    double salary;
};
class TeachingAssistant:public Person,public Student,public Teacher{
    public:
        void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll_num:"<<rollNum<<endl;
        cout<<"Subject:"<<subject<<endl;
        }

};



int main(){
    TeachingAssistant T1;
    T1.name="Praveen";
    T1.age=25;
    T1.rollNum=256;
    T1.subject="Maths";
    T1.getInfo();



}