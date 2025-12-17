//using cpp find the area of triangle
#include<iostream>
int main(){
    double base,height;
    double area;
    std::cout<<"Enter the length of base of triangle: ";
    std::cin>>base;
    std::cout<<"Enter the height of triangle: ";
    std::cin>>height;

    area=(0.5)*base*height;
    std::cout<<"Area of triangle: "<<area<<std::endl;
    return 0;

}