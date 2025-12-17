//convcer the distance from km to miles
#include<iostream>
#include<iomanip>
int main(){
    double km,mile;
    std::cout<<"Enter the distance in km: ";
    std::cin>>km;
    mile=0.621371*km;
    std::cout<<std::fixed <<std::setprecision(2);  
    std::cout<<km<<" is equal to "<<mile<<" miles";
    return 0;
}