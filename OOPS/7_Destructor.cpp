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

    //Destructor
    ~Student(){
        cout<<"Hi I delete Everything"<<endl;
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
}