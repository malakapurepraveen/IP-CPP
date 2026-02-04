//Copy constructor - A special constructor (default)used to copy properties of one object into another
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

    Teacher(Teacher &orgObj){       //copy constructor
        cout<<"Custom Copy Constructor"<<endl;
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
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

    Teacher t2(t1);
    t2.getInfo();


    // t1.getInfo();


}