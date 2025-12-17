//write a cpp program to check given number is even or odd
#include<iostream>
int main(){
    int num;
    std::cout<<"Enter the numbe to be checked: ";
    std::cin>>num;

    if(num%2==0)
        std::cout<<num<<" is even\n";
    else
        std::cout<<num<<" is odd\n";
    return 0;

}