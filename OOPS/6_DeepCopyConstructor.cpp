#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    string subject;
    double* cgpaptr;


    Student(string name,double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
        subject="Maths";
    }
    Student(Student &obj){
        this->name=obj.name;
        cgpaptr=new double;
        *cgpaptr=*obj.cgpaptr;
        this->subject=obj.subject;
        
    }
    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"CGPA:"<<*cgpaptr<<endl;
        cout<<"Subject:"<<subject<<endl;
    }

};
int main(){
    Student s1("Neha",8.5);
    s1.getInfo();

    Student s2(s1);
    s2.name="Kavya";
    *s2.cgpaptr=9.5;
    s1.getInfo();
    s2.getInfo();
}