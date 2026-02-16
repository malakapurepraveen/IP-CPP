#include<iostream>
#include<memory>
using namespace std;
class Wrapper{
    private:
        int* mem;
    public:
        Wrapper(int* a):mem(a){
            cout<<mem<<endl;
            cout<<*mem<<endl;
            cout<<"Constructor is called"<<endl;
        }
        ~Wrapper(){
            cout<<"Destructor is called<<endl";
            delete mem;
        }
};
int main(){
    Wrapper obj(new int(10));
    // unique_ptr<int> p=make_unique<int>();

    return 0; 
}