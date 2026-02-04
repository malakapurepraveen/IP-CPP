#include<iostream>
#include<queue>
using namespace std;
int main(){

    // priority_queue<int> pq;   //by default priority will take largest value
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(1);
    pq.push(5);
    pq.push(7);
    pq.push(100);
    pq.push(5);
    pq.push(6);

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }


    return 0;
}