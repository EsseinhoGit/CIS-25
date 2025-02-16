// Project_1_BudgetTracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to store transaction details
struct Transaction {
    string type;  // Income or Expense
    string category;
    double amount;
};

// Function prototypes
void addTransaction(vector<Transaction>& transactions, double& balance);
void viewSummary(const vector<Transaction>& transactions, double balance);
void searchRecords(const vector<Transaction>& transactions);
void budgetAdvice(double balance);

int main() {
    vector<Transaction> transactions;
    double balance = 0.0;
    int choice;

    do {
        cout << "\n========= THE BANK OF ESSEY =====\n";
        cout << "\n==========Personal Budget Tracker =====\n";
        cout << "1. Add Transaction\n";
        cout << "2. View Summary\n";
        cout << "3. Search Records\n";
        cout << "4. Get Budget Advice\n";
        cout << "5. Exit :( \n";
        cout << "Enter your choice of number please (1-5) -> ";
        cin >> choice;

        switch (choice) {
        case 1:
            addTransaction(transactions, balance);
            break;
        case 2:
            viewSummary(transactions, balance);
            break;
        case 3:
            searchRecords(transactions);
            break;
        case 4:
            budgetAdvice(balance);
            break;
        case 5:
            cout << "Exiting program :( \n";
            break;
        default:
            cout << " That's an invalid choice. \n Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

// Function to add a transaction
void addTransaction(vector<Transaction>& transactions, double& balance) {
    Transaction newTransaction;
    cout << "Enter/type (Income/Expense): ";
    cin >> newTransaction.type;
    cout << "Enter category -> ";
    cin >> newTransaction.category;
    cout << "Enter amount -> ";
    cin >> newTransaction.amount;

    if (newTransaction.type == "Income") {
        balance += newTransaction.amount;
    }
    else {
        balance -= newTransaction.amount;
    }

    transactions.push_back(newTransaction);
    cout << "Transaction added successfully :)\n";
}

// Function to view transaction summary
void viewSummary(const vector<Transaction>& transactions, double balance) {
    cout << "\n===== Transaction Summary =====\n";
    for (const auto& transaction : transactions) {
        cout << transaction.type << " - " << transaction.category << " : $" << transaction.amount << "\n";
    }
    cout << "Remaining Balance: $" << balance << "\n";
}

// Function to search records by category
void searchRecords(const vector<Transaction>& transactions) {
    string searchCategory;
    cout << "Enter category to search -> ";
    cin >> searchCategory;

    bool found = false;
    for (const auto& transaction : transactions) {
        if (transaction.category == searchCategory) {
            cout << transaction.type << " - " << transaction.category << " : $" << transaction.amount << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No transactions were found for this category.\n";
    }
}

// Function to give basic budget advice
void budgetAdvice(double balance) {
    if (balance > 1000) {
        cout << "Great job! You have a healthy balance :) You should also consider investing.\n";
    }
    else if (balance > 500) {
        cout << "You're doing really well! Try to save more and reduce unnecessary spending ;)\n";
    }
    else {
        cout << "Be careful! Your balance is low :( Prioritize essential expenses only... unless you want to stay broke.\n";
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
