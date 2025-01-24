#include <iostream>
using namespace std;

int main() {
    int x, y, temp;

    cout << "Enter the value of x -> ";
    cin >> x;
    cout << "Enter the value of y -> ";
    cin >> y;

    cout << "Before swapping -> x = " << x << ", y = " << y << endl;

    temp = x;
    x = y;
    y = temp;

    cout << "After swapping -> x = " << x << ", y = " << y << endl;

    return 0;
}