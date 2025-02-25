#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    void setBalance(double amount) {
        balance = amount;
    }
    double getBalance() {
        return balance;
    }
};
int main()
{
  BankAccount bank;
  bank.setBalance(2000);
  double remain = bank.getBalance();
  cout<<remain;
    return 0;
}