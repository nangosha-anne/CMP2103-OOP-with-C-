// Write a program that prompts the user to enter three integer values, and
// then outputs the values in numerical sequence separated by commas.
// So, if the user enters the values 10 4 6, the output should be 4, 6, 10.
// If two values are the same, they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Simple bubble sort for three integers
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }

    cout << "In ascending order: " << a << ", " << b << ", " << c << endl;
    return 0;
}