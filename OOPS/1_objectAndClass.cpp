#include<iostream>
#include<string>

using namespace std;
class Teacher{
    //properities
    public:
    string name;
    string dept;
    double salary;
    string subject;

    //Methods // member functions
    void changeDept(string newdept){
        dept=newdept;
    }

};
int main(){

    Teacher t1;
    t1.name="Praveen";
    t1.dept="ECE";
    t1.salary=10000.00;
    t1.subject="maths";

    cout<<t1.dept<<endl;
    
    t1.changeDept("Chemistry");
    cout<<t1.dept<<endl;


}