#include<iostream>
int main(){
    int x,y;
    std::cout<<"Enter the 1st number: ";
    std::cin>>x;
    std::cout<<"Enter the 2nd number: ";
    std::cin>>y;
    
    std::cout<<"addition of given numbers is:"<<x+y<<'\n';
    if(y!=0)
        std::cout<<"division of two numbers: "<<(double)x/y<<'\n';
    else
        std::cout<<"cannot divide by 0"<<'\n';
    return 0;
    
}