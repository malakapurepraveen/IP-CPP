// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     vector<int> vec2(3,8);
//     vector<int> vec3={1,2,3};
//     vector<int> vec4(vec3);

//     cout<<vec2.size()<<endl;
//     cout<<vec2.capacity()<<endl;

//     vec2.push_back(10);
//     cout<<vec2.front()<<endl;
//     cout<<vec2.back()<<endl;
//     vec2.pop_back();
//     cout<<vec2.at(1)<<endl;

//     vec2.insert(vec2.begin()+1,7);

//     for(int val:vec2){
//         cout<<val<<" ";
//     }
//     cout<<endl;
    
//     vec2.erase(vec2.begin(),vec2.begin()+2);
//     for(int val:vec2){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     cout<<vec2.size()<<endl;
//     cout<<vec2.capacity()<<endl;
//     // vec2.clear();
//     cout<<*(vec2.begin());
//     cout<<vec2.empty()<<endl;
//     // vec2.rend();
    
//     for(int val:vec2){
//         cout<<val<<" ";
//     }
//     return 0;
// }




/**********Iterator************ */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5,6};
    vector<int>::iterator it;

    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";

    }
    cout<<endl;
    
    vector<int>::reverse_iterator its;
    
    for(its=vec.rbegin(); its!=vec.rend();its++){
        cout<<*its<<" ";
    }
    cout<<endl;

    reverse(vec.begin(),vec.end());
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    

    return 0;


}