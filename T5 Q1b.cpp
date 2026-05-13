#include <iostream>
using namespace std;

class BankAccount {
private:
double balance;

public:

BankAccount() { balance = 0.0; }
void Deposit(double amount) ;
void Withdraw(double amount);
double GetBalance() ;

};

void BankAccount::Deposit(double amount){

balance =+ amount;
cout << "\n Current Balance: " << balance;
}

void BankAccount::Withdraw(double amount){


if (amount > balance){

    cout << "Insufficient Fund!";

} else {

balance =- amount;
cout << "\n Current Balance: " << balance;

}

}

int main(){

    BankAccount b;
    b.Deposit(1000);
   
}