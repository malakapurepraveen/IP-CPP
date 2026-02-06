#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int left=0;
    int right=s.length()-1;
    cout<<right<<endl;
    int length=0;
    int i=0;
    while(s[i]!='\0'){
        length++;
        i++;
    }
    cout<<length<<endl;

    while(left<right){
        // swap(s[left],s[right]);
        int temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        right--;
        left++;
    }
    cout<<"Reversed string: "<<s<<endl;
        return 0;
}