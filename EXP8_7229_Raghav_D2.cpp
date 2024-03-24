//1.     Maintain a banking application that simulates transactions between multiple bank accounts. Each bank account has a unique account number, and you need to keep track of the total number of transactions performed across all accounts.
//a.      Design a class to represent bank accounts in C++ and utilize static variables and methods to manage transaction data.
//b.     Discuss how you would implement a static variable to count the total number of transactions and provide static methods to access this variable and update it whenever a transaction occurs.
#include <iostream>

class BankAccount {
private:
  int accountNumber;
  double balance;
  static int totalTransactions;

public:
  // Constructor to initialize account details
  BankAccount(int accountNumber, double initialBalance = 0.0) :
      accountNumber(accountNumber), balance(initialBalance) {}

  // Method to deposit funds
  void deposit(double amount) {
    balance += amount;
    totalTransactions++;
  }

  // Method to withdraw funds (with basic validation)
  void withdraw(double amount) {
    if (amount <= balance) {
      balance -= amount;
      totalTransactions++;
    } else {
      std::cout << "Insufficient funds for withdrawal." << std::endl;
    }
  }

  // Method to transfer funds to another account
  void transfer(double amount, BankAccount& recipient) {
    if (amount <= balance) {
      balance -= amount;
      recipient.deposit(amount);
      totalTransactions += 2;  // Increment for both withdrawal and deposit
    } else {
      std::cout << "Insufficient funds for transfer." << std::endl;
    }
  }

  // Getter for account number
  int getAccountNumber() const { return accountNumber; }

  // Getter for balance
  double getBalance() const { return balance; }

  // Static method to get total transactions
  static int getTotalTransactions() {
    return totalTransactions;
  }

  // Static method to reset total transactions (for testing purposes)
  static void resetTotalTransactions() {
    totalTransactions = 0;
  }

};

// Initialize static variable outside the class
int BankAccount::totalTransactions = 0;

int main() {
  BankAccount account1(12345, 100.0);
  BankAccount account2(54321);

  account1.deposit(50.0);
  account2.withdraw(20.0);
  account1.transfer(25.0, account2);

  std::cout << "Account 1 balance: $" << account1.getBalance() << std::endl;
  std::cout << "Account 2 balance: $" << account2.getBalance() << std::endl;
  std::cout << "Total transactions: " << BankAccount::getTotalTransactions() << std::endl;

  return 0;
}
