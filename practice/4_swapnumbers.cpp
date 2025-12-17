//write a cpp program to swap two variables
#include<iostream>
int main(){
    int a,b,temp;
    std::cout<<"Enter the first number: ";
    std::cin>>a;
    std::cout<<"Enter the 2nd number: ";
    std::cin>>b;

    std::cout<<"Original values: a="<<a<<" "<<"b="<<b<<'\n';
    temp=a;
    a=b;
    b=temp;
    std::cout<<"after swapping numbers: a="<<a<<" "<<"b="<<b<<'\n';
    return 0;

}
// #include <iostream>
// #include <algorithm>  // for std::swap

// int main() {
//     int a, b;

//     std::cout << "Enter the first number: ";
//     std::cin >> a;

//     std::cout << "Enter the 2nd number: ";
//     std::cin >> b;

//     std::cout << "Original values: a=" << a << " b=" << b << '\n';

//     std::swap(a, b);  // swapping using built-in function

//     std::cout << "After swapping: a=" << a << " b=" << b << '\n';

//     return 0;
// }