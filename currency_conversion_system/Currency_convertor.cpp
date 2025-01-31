// Currency_convertor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <limits> // For numeric_limits this is..
using namespace std;

// Define conversion rates as constants ( because we don't want them to be changed after initialized)
const double usdToEur = 0.92;
const double usdToGbp = 0.81;
const double usdToJpy = 133.45;

// Function to convert currency
double convertCurrency(double amount, double rate) {
    return amount * rate;
}

int main() {
    // Our Variables
    double amount;
    int fromCurrency, toCurrency;
    double result;

    cout << "Welcome to Essey's Currency Converter..." << endl;
    cout << "1. USD to EUR\n; 2. USD to GBP\n3. USD to JPY\n";
    cout << "4. EUR to USD\n5. GBP to USD\n6. JPY to USD\n";
    cout << "Select the currency you want to convert from (choose from 1-6) -> ";
    cin >> fromCurrency;

    // Check if there is any input issues....
    if (cin.fail() || fromCurrency < 1 || fromCurrency > 6) {
        cout << "Oops! that's an invalid input... try again (from 1 - 6 only )" << endl;
        return 1; // exit if invalid
    }

    cout << "Enter the amount -> ";
    cin >> amount;

    // Validate the amount...
    if (cin.fail() || amount < 0) {
        cout << "nope, but negative amounts aren't allowed... try again (from 1 - 6 only ) " << endl;
        return 1; // reslults an exit if invalid
    }

    // Show currency options to convert to...
    cout << "Select the currency you want to convert to -> \n1. USD\n2. EUR\n3. GBP\n4. JPY\n";
    cin >> toCurrency;

    // Validate target currency input
    if (cin.fail() || toCurrency < 1 || toCurrency > 4) {
        cout << "Sorry, invalid target currency!" << endl;
        return 1; // results an exit if invalid
    }

    // Performing the currency conversion...
    switch (fromCurrency) {
    case 1: // from USD to other currencies
        if (toCurrency == 1) {
            result = amount; // USD to USD (same currency, non changes)
        }
        else if (toCurrency == 2) {
            result = convertCurrency(amount, usdToEur); // USD to EUR
        }
        else if (toCurrency == 3) {
            result = convertCurrency(amount, usdToGbp); // USD to GBP
        }
        else if (toCurrency == 4) {
            result = convertCurrency(amount, usdToJpy); // USD to JPY
        }
        break;
    case 2: // EUR to USD
        result = convertCurrency(amount, 1 / usdToEur); // EUR to USD (inverse rate)
        break;
    case 3: // GBP to USD
        result = convertCurrency(amount, 1 / usdToGbp); // GBP to USD
        break;
    case 4: // JPY to USD
        result = convertCurrency(amount, 1 / usdToJpy); // JPY to USD
        break;
    default:
        cout << "Invalid conversion!" << endl;
        return 1; // exit if invalid
    }

    // Display the result with formatting
    cout << fixed << setprecision(2); // 2 decimal places for neatness ;)
    cout << "Here is the converted amount -> " << result << endl;

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
