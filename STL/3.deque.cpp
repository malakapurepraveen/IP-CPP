#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;
int main(){
    deque<int> d={1,2,3,4,5};
    d.push_front(2);
    d.push_back(4);

    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    d.pop_back();
    d.pop_front();
        for(int val:d){
        cout<<val<<" ";
    
    }
    cout<<endl;
    cout<<d[2]<<endl;   //we can't access random element in list



    //emplace_back(),emplace_front(),pop_back(),pop_front(),size(),erase(),clear,begin,end,rbegin,rend,insert,front,back
}
