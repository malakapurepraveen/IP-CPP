//using cpp find the number is negative, positive ot=r zero
#include<iostream>
int main(){
    int x;
    std::cout<<"Enter the number to check: ";
    std::cin>>x;

    if(x>0)
        std::cout<<x<<" is positive number\n";
    else if(x<0)
        std::cout<<x<<" is negative number\n";
    else
        std::cout<<x<<" is 0 \n";    

   return 0;      
}