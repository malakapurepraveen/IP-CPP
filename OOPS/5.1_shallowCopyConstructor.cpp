// #include<iostream>
// using namespace std;
// class Shallow{
//     public:
//         int* data;
    
//     Shallow(int value){
//         data=new int(value);
//     }


// };

// int main(){
//     Shallow s1(10);
//     cout<<*s1.data<<endl;

//     Shallow s2=s1;
//     cout<<*s2.data<<endl;

//     *s2.data=50;
//     cout<<*s1.data<<endl;
//     cout<<*s2.data<<endl;
//     return 0;
// }

// D:\CPP\IP-CPP\OOPS>a.exe
// 10
// 10
// 50
// 50
//s1.data and s2.data point to the same memory heap
//changing one effect the other


#include<iostream>
using namespace std;
class Shallow{
    public:
        int* data;

        Shallow(int value){
            data=new int(value);
            cout<<"Constructor is called: Memory allocated"<<endl;
        }
        Shallow(const Shallow& other) {
        data = other.data;   // address copied, not value
        cout << "Shallow Copy Constructor called\n";
    }
        ~Shallow(){
            cout<<"Destructor is called: Memory allocated to object is deleted"<<endl;
            delete data;
        }

};

int main(){
    Shallow obj1(10);
    cout<<*obj1.data<<endl;
{
    Shallow obj2=obj1;

    *obj2.data=10;
    cout<<*obj2.data<<endl;
}
    cout<<*obj1.data<<endl;

    return 0;
}