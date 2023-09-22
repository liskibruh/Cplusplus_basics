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


};

int main() {

    BankAccount myaccount(100);
    
    float my_balance=myaccount.getbalance();
    cout << "Balance: " << my_balance << endl;
    

    return 0;
}

