#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    private:
        float balance;

    public:
        BankAccount(float init_balance) {
            this->balance= init_balance;
        }

        float getbalance() {
            return balance;
        }

        void deposit(double amount) {
            balance+=amount;
            cout << "Deposited!" << endl;
            cout << "New balance: " << balance << endl;
        }

        void transaction(double amount) {
            balance-=amount;
            cout << "Tansaction Completed!" << endl;
            cout << "New balance: " << balance << endl;
        }


};

int main() {

    BankAccount myaccount(100);
    
    //float my_balance=myaccount.getbalance();
    //cout << "Balance: " << my_balance << endl;

    myaccount.deposit(100);
    //myaccount.transaction(200);
    myaccount.deposit(100);

    

    return 0;
}

