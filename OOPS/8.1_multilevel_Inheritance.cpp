#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    string age;
};
class Student:public Person{
    public:
    int roll_num;
};
class GradStudent:public Student{
    public:
    string researchArea;


    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll_num:"<<roll_num<<endl;
        cout<<"Research Area:"<<researchArea<<endl;
    }
};
int main(){

    GradStudent g1;
    g1.name="Praveen";
    g1.age=21;
    g1.roll_num=35;
    g1.researchArea="Quantom Physics";

    g1.getInfo();


}