#include<iostream>
using namespace std;


class Bank{
    private:
        double balance=67009;
    
    public:
        string name;

        void setBalance(double balance){
            this->balance=balance;
        }
        double getBalance(){
            return balance;
        }
};
int main(){
    Bank b1;
    b1.name="Praveen";
    cout<<b1.getBalance()<<endl;

    return 0;
}