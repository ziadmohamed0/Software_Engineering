/**
 * @file Task_6_3.cpp
 * @author Ziad Mohmmed fathy
 * @brief  C++ program that uses namespaces to organize code related to different types of bank accounts. 
 *          Define namespaces for SavingsAccount and CheckingAccount, 
 *          and then use these namespaces to simulate some banking operations.
 * @version 0.1
 * @date 2025-03-13
 */

#include <iostream>


namespace SavingsAccount {

    double balance = 0.0;

    /**
     * @brief Creates a savings account with thespecified initial balance
     * 
     * @param initialBalance 
     */
    void createAccount(double initialBalance) {
        balance = initialBalance;
        std::cout << "Create Account - with balance = $" << balance << std::endl;
    } 

    /**
     * @brief Adds interest to the savings account balancebased 
     *          on the given annual interest rate.
     * 
     * @param rate 
     */
    void addInterest(double rate) {
        balance += balance * (rate / 100);
        std::cout << "Interest add - with balance = $" << balance << std::endl;
    }

    /**
     * @brief Returns the current balance of the savings account
     * 
     * @return double 
     */
    double getBalance(void) {
        return balance;
    }
}

namespace CheckingAccount {

    double balance = 0.0;

    /**
     * @brief Creates a checking account with thespecified initial balance
     * 
     * @param initialBalance 
     */
    void createAccount(double initialBalance) {
        balance = initialBalance;
        std::cout << "Create Account - with balance = $" << balance << std::endl;
    }

    /**
     * @brief Applies a transaction fee to the checking accountbalance
     * 
     * @param fee 
     */
    void applyFee(double fee) {
        balance -= fee;
        std::cout << "New balance = $" << balance << std::endl;
    }

    /**
     * @brief Returns the current balance of the checking account
     * 
     * @return double 
     */
    double getBalance(void) {
        return balance;
    }
}

int main (void) {

    double return_balance_Saving, return_balance_Checking; // variables to stored into balance checking & saving namespaces.

    std::cout << "-----------------------\n";
    SavingsAccount::createAccount(1000.5);
    SavingsAccount::addInterest(50);
    return_balance_Saving = SavingsAccount::getBalance();
    std::cout << "Balance now = $" << return_balance_Saving << std::endl;
    std::cout << "-----------------------\n";

    CheckingAccount::createAccount(500);
    CheckingAccount::applyFee(100);
    return_balance_Checking = CheckingAccount::getBalance();
    std::cout << "Balance now = $" << return_balance_Checking << std::endl;
    std::cout << "-----------------------\n";

    return 0;
}