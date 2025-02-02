// deckOfcards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int DISPLAY_WIDTH = 40;

string generateCard() {
    string values[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
    string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    string value = values[rand() % 13];
    string suit = suits[rand() % 4];

    return value + " of " + suit;
}

void showCard(const string& card) {
    string title = "Your Casino Card is-> ";
    string separator = "------------------ ";
    int totalTextSize = title.length() + card.length();
    int fillSize = DISPLAY_WIDTH - totalTextSize - 2;

    string fill = (fillSize > 0) ? string(fillSize, '-') : " ";

    cout << string(DISPLAY_WIDTH, '*') << endl;
    cout << "*" << setw(DISPLAY_WIDTH - 2) << right << "*" << endl;
    cout << "* " << title << fill << card << " *" << endl;
    cout << "*" << setw(DISPLAY_WIDTH - 2) << right << "*" << endl;
    cout << string(DISPLAY_WIDTH, '*') << endl;
}

int main() {
    srand(time(0));
    string card = generateCard();
    showCard(card);
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
