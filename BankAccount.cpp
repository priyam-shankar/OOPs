#include<iostream>
using namespace std;

class BankAccount {
    private:
    string accountHolderName;
    double balance;

   public: 
   void setAccountHolderName(string name) {
    accountHolderName = name;
   }
   void setBalance(double amount) {
    if(amount >= 0) {
        balance = amount;
    }else {
        cout << "Invalid balance!\n";
    }
   }
   void deposit(double amount);
   void withdraw(double amount);
   void displayBalance();
};

void BankAccount::deposit(double amount) {
    balance = balance + amount;
}

void BankAccount::withdraw(double amount) {
    if(amount <= balance) {
        balance = balance - amount ;
    } else {
        cout << "Insufficient Balance!\n";
    }
}

void BankAccount::displayBalance() {
    cout << "Account Holder: "<<accountHolderName <<endl;
    cout<< "Balance: " <<balance <<endl;
}

int main() {
    BankAccount SBI;
    SBI.setAccountHolderName("Priyam Shankar");
    SBI.setBalance(1000);

    SBI.deposit(1000);
    SBI.withdraw(500);
    SBI.displayBalance();
    return 0;
}