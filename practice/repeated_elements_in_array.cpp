// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 2, 4, 5, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Repeated elements are: ";

//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 cout << arr[i] << " ";
//                 break; // avoid multiple prints
//             }
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1, 2, 3, 2, 4, 5, 1};
//     int sizeOfArray=sizeof(arr)/sizeof(arr[1]);

//     for(int i=0;i<sizeOfArray;i++){
//         for(int j=i+1;j<sizeOfArray;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//         }
//     }
//     cout<<endl;
//     return 0;
// }

//using sorting
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){

//     int arr[]={1, 2, 3, 2, 4, 5, 1};
//     int n=sizeof(arr)/sizeof(arr[1]);

//     sort(arr,arr+n);

//     for(int i=0;i<n-1;i++){
//         if(arr[i]==arr[i+1]){
//             cout<<arr[i]<<" ";
//         }
//     }

//     return 0;
// }


#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[]={1,2,3,1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    map<int,int> frq;
    for(int i=0;i<n;i++){
        frq[arr[i]]++;
    }
    for(auto x:frq){
        // if(>1){
                cout<<x.first<<"->"<<x.second<<endl;
        }
    // }
    return 0;
}