//Getter and setter is special methos to access and modify private properites

#include<iostream>
#include<string>

using namespace std;
class Teacher{
    private:
    double salary;
        
    public:
    //properities
    string name;
    string dept;
    string subject;

    //Methods // member functions
    void changeDept(string newdept){
        dept=newdept;
    }

    //getter
     double getSalary(){
        return salary;
     }
     //setter
     void setSalary(double s){
        salary=s;
     }

};
int main(){

    Teacher t1;
    t1.name="Praveen";
    t1.dept="ECE";
    // t1.salary=10000.00;   can't access because salry is private propery
    t1.subject="maths";

    cout<<t1.dept<<endl;
    
    t1.changeDept("Chemistry");
    cout<<t1.dept<<endl;

    cout<<t1.getSalary()<<endl;

    t1.setSalary(21000);
    
    cout<<t1.getSalary()<<endl;



}