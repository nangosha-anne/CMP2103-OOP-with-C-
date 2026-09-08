// Write a program that prompts the user to enter two integer values.
// Store these values in int variables named val1 and val2.
// Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
#include <iostream>
using namespace std;
int main()
{
    int val1, val2;
    cout << "Please enter two integer values (followed by 'enter'):\n";
    cin >> val1 >> val2;

    int smaller = (val1 < val2) ? val1 : val2;
    int larger = (val1 > val2) ? val1 : val2;
    int sum = val1 + val2;
    int difference = val1 - val2;
    int product = val1 * val2;
    double ratio = static_cast<double>(val1) / static_cast<double>(val2);

    cout << "Smaller value: " << smaller <<  endl;
    cout << "Larger value: " << larger << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Ratio: " << ratio << endl;

    return 0;
}