#include<iostream>
int main(){
    std::cout<<"Hello World!"<<std::endl;
    int a=10,b=3;

    //Arithmetic opration
    //addition
    int sum=a+b;
    std::cout<<sum<<"\n";

    //substraction
    int diff=a-b;
    std::cout<<diff<<"\n";

    //product
    int product=a*b;
    std::cout<<product<<"\n";

    //devision
    int quotient=a/b;
    std::cout<<quotient<<"\n";
    //modulus
    int remainder=a%b;
    std::cout<<remainder<<"\n";

    //incremental operator
    int c=5;
    int y=++c;
    int z=c++;
    std::cout<<y<<" "<<c<<"\n";
    std::cout<<y<<" "<<c<<"\n";

    //decremental operation
    int d=5;
    int u=--d;
    int v=d--;
    std::cout<<u<<" "<<d<<"\n";
    std::cout<<v<<" "<<d<<"\n";


    //relational operator
    bool e=a>b;
    bool f=a<b;
    std::cout<<e<<"\n";
    std::cout<<f<<"\n";

    //bitwise operator
        //AND operator
    int AND=5&6;
    std::cout<<AND<<"\n";

        //OR operator
    int OR=5|6;
    std::cout<<OR<<"\n";

        //EXOR operator
    int EXOR=5^6;
    std::cout<<EXOR<<"\n";

        //NOR operator
    int NOR=~5;
    std::cout<<NOR<<"\n";

        //Bitwise left shift
    int BIT_LEFT=5<<1;
    std::cout<<BIT_LEFT<<"\n";

        //bitwise right shift
    int BIT_RIGHT=5>>1;
    std::cout<<BIT_RIGHT<<"\n";

    

    return 0;







}