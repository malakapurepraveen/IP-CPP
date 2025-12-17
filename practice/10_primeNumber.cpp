//write a program to check prime number
#include<iostream>
int main(){
    int num;
    std::cout<<"Enter number to be checked: ";
    std::cin>>num;
    bool isPrime=true;

    if(num<=1)
        isPrime=false;
    else
        for(int i=2;i<num;i++){  //for(int i=2;i<num;i++) You only need to check divisors up to sqrt(num), not all the way to num-1.
                                    //This makes your program faster, especially for large values.
            if(num%i==0){
                isPrime=false;
                break;
            }
        }
    
    if(isPrime)
        std::cout<<num<<" is prime number\n";
    else
        std::cout<<num<<" is not a prime number\n";
    
    return 0;
}