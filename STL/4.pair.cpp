#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,int> p={3,4};

    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<int,pair<char,int>> p2={1,{'a',6}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;


    vector<pair<int,int>> vec={{1,2},{3,4},{5,6},{7,8}};

    for(pair<int,int> val:vec){
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;


    
    vec.push_back({6,6});  //It assumes already pair are created just we need to insert
    vec.emplace_back(7,7);  //in-place object create at the time of inserion
    
    for(auto val:vec){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}