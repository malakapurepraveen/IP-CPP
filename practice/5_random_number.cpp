//generate a random number from 1-100
#include<iostream>
#include<ctime>
int main(){
    srand(time(0));
    int randomNumber=(rand()%100)+1;
    std::cout<<"Random number: "<<randomNumber<<'\n';
    return 0;
}