// checkBoard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
char world[MAX_SIZE][MAX_SIZE];

void initializeWorld(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            world[i][j] = ' ';
        }
    }
}

void printWorld(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << world[i][j] << " ";
        }
        cout << endl;
    }
}

void generateCheckerboard(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                world[i][j] = 'X';
            }
            else {
                world[i][j] = 'O';
            }
        }
    }
}

int main() {
    int rows = 8, cols = 8;
    initializeWorld(rows, cols);
    generateCheckerboard(rows, cols);
    printWorld(rows, cols);
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
