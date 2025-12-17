#include<iostream>
int main(){
    int a, b;
    std::cout<<"Enter the 1st number: ";\
    std::cin>>a;
    std::cout<<"Enter the 2nd number: ";
    std::cin>>b;
    std::cout<<"Before swapping the numbers: a="<<a<<" "<<"b="<<b<<" \n";
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"After swapping the numbers: a="<<a<<" "<<"b="<<b<<" \n";
    return 0;

    
}