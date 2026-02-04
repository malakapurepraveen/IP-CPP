#include<iostream>
using namespace std;

void printX(){
    static int x=0;
    x++;
    cout<<x<<endl;
}
int main(){
    printX();
    printX();
    printX();
    printX();
    printX();
    printX();
    return 0;

}