#include<iostream>
#include<vector>
#include<list>

using namespace std;
int main(){
    list<int> l={1,2,3,4,5};
    l.push_front(2);
    l.push_back(4);

    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
        for(int val:l){
        cout<<val<<" ";
    
    }
    cout<<l[2]<<endl;   //we can't access random element in list


    cout<<endl;

    //emplace_back(),emplace_front(),pop_back(),pop_front(),size(),erase(),clear,begin,end,rbegin,rend,insert,front,back
}
