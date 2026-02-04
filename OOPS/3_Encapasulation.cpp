//Encapsulation: is wrapping up data & member function in a single unit class.
//Encapsulation is use to data hide using access modifier

//eg: banking - balance we can't show to everyone so we hide using private acccess modifier

#include<iostream>
#include<string>

using namespace std;
class Teacher{
    //properities
    private:
    double salary;

    public:
    string name;
    string dept;
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
    // t1.salary=10000.00;
    t1.subject="maths";

    cout<<t1.dept<<endl;
    
    t1.changeDept("Chemistry");
    cout<<t1.dept<<endl;


}