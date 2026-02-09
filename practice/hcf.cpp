// #include<iostream>
// using namespace std;
// int main(){
//     int a=10,b=5;
//     int hcf=1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             hcf=i;
//         }
//     }

//     cout<<"HCF: "<<hcf<<endl;
//     return 0;
// }


//euclids algorithms

#include<iostream>
using namespace std;
int main(){
    int a=12,b=18;

    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    cout<<"HCF: "<<a<<endl;

}