// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);

//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     cout<<s.size()<<endl;

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;

//     return 0;


// }



/*****************Swap*****************/
#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);


    cout<<"size of s before swap"<<s.size()<<endl;
    
    stack<int> s2;
    s.swap(s2);
    cout<<"size of s after swap: "<<s.size()<<endl;
    cout<<"size of s2: "<<s2.size()<<endl;
    
    return 0;
}