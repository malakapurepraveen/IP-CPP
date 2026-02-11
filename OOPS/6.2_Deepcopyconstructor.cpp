

#include<iostream>
using namespace std;
class Deep{
    public:
        int* data;
    
    Deep(int value){
        data = new int(value);
        cout<<"Consturor is called"<<endl;
    }
    Deep(const Deep& other){
        data=new int(*other.data);
    }
    ~Deep(){
        cout<<"Destructor is called"<<endl;
        delete data;
    }
    //
    Deep& operator=(const Deep& other){
        if(this!=&other){
            delete data;
            data=new int(*other.data);
        }
        return *this;
    }

    void show(){
        cout<<"Data="<<*data<<endl;
    }
};

int main(){

    Deep obj1(10);
    cout<<*obj1.data<<endl;
    
    Deep obj2(20);
    obj2=obj1;
    
    *obj2.data=30;
    
    cout<<*obj1.data<<endl;
    cout<<*obj2.data<<endl;

    obj1.show();
    obj2.show();
    // obj3.show();

    return 0;
}
















// #include<iostream>
// using namespace std;
// class DeepCopy{
//     public: 
//         int* data;
//     public:
//         DeepCopy(int value){
//             data =new int(value);
//             cout<<"Constructor is called: Memory allocated, value="<<value<<endl;
//         }
//         DeepCopy(const DeepCopy& other){
//             data=new int(*other.data);
//             cout<<"Deep Copy constructor is called"<<endl;
//         }
//         ~DeepCopy(){
//             cout<<"Destructor called: memory deallocated"<<endl;
//             delete data;
//         }


// };
// int main(){
//     DeepCopy obj1(10);
//     cout<<*obj1.data<<endl;

    
//     DeepCopy obj2=obj1;
//     // DeepCopy obj2(obj1);
//     // *obj2.data=30;
//     cout<<*obj1.data<<endl;
//     cout<<*obj2.data<<endl;
    
//     return 0;
// }