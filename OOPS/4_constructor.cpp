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

    Teacher(){                         //non-parameterized construction
        name="Praveen";
        dept="ECE";
        cout<<"constructor is called\n";
    }
    Teacher(string name, string dept){  //parameterized construction
        this->name=name;
        this->dept=dept;
    }

    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"department:"<<dept<<endl;

    }
    //Methods // member functions
    void changeDept(string newdept){
        dept=newdept;
    }

};
int main(){

    // Teacher t1;
    Teacher t1("Praveen","CSE");

    t1.salary=10000.00;
    t1.subject="maths";


    t1.getInfo();


}