// #include<iostream>
// #include<string>
// #include<cstring>
// using namespace std;
// int main(){

//     char str1[]={'P','r','a','v','e','e','n'};            
//     char str2[]={'P','r','a','v','e','e','n','\0'};
//     char str3[]="Praveen";
//     char str4[10];
//     char str5[10];
//     cout<<str1<<endl;   //PraveenP■_üU
//     cout<<str2<<endl;   //Praveen
//     cout<<str3<<endl;   //Praveen
//     cout<<str4<<endl;   //Praveen


//     cout<<strlen(str4)<<endl;
//     cout<<sizeof(str4)<<endl;

//     cout<<"Enter a full name"<<endl;
//     cin>>str4;
//     cout<<str4<<endl;

//     cout<<"Enter a full name"<<endl;
//     cin.getline(str5,100);
//     cout<<str5<<endl;
//     return 0;
// }


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    string str2;
    string str3;
    cout<<"Enter full name: ";
    getline(cin,str);
    cout<<"Enter full name: ";
    getline(cin,str2);
    str3=str+" "+str2;


    for(int i=0;i<=str3.length();i++){

        cout<<str3[i]<<" ";
    }
    cout<<endl;
    for(char i:str3){
        cout<<i<<" ";
    }
    cout<<(str==str2)<<endl;
    cout<<str3.length()<<endl;

    reverse(str3.begin(),str3.end());
    cout<<str3<<endl;
    return 0;

}