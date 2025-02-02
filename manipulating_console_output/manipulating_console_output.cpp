// manipulating_console_output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int userId1 = 1, userId2 = 2, userId3 = 3;
    string userName1 = " Essey", userName2 = " Messi", userName3 = " Isak";
    double userBalance1 = 1000.00, userBalance2 = 530.25, userBalance3 = 2040.50;

    cout << setw(30) << "Daily Report" << endl;
    cout << "--------------------------------------" << endl;

    cout << left << setw(8) << "ID"
        << setw(15) << "Name"
        << right << setw(10) << "Balance" << endl;
    cout << "--------------------------------------" << endl;

    cout << left << setw(8) << setfill('0') << setw(5) << userId1 << setfill(' ')
        << setw(15) << userName1
        << right << "$" << setw(9) << fixed << setprecision(2) << userBalance1 << endl;

    cout << left << setw(8) << setfill('0') << setw(5) << userId2 << setfill(' ')
        << setw(15) << userName2
        << right << "$" << setw(9) << fixed << setprecision(2) << userBalance2 << endl;

    cout << left << setw(8) << setfill('0') << setw(5) << userId3 << setfill(' ')
        << setw(15) << userName3
        << right << "$" << setw(9) << fixed << setprecision(2) << userBalance3 << endl;

    return 0;
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
