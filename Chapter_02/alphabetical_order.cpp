// Rewrite the ascending.cpp program to process stings instead.
// So, if the user enters the values Electrical Eng., Computer Eng., Biomedical Eng.,
// the output should be Biomedical Eng., Computer Eng., Electrical Eng..
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);
    cout << "Enter the third string: ";
    getline(cin, s3);

    // Simple bubble sort for three strings
    if (s1 > s2) {
        swap(s1, s2);
    }
    if (s2 > s3) {
        swap(s2, s3);
    }
    if (s1 > s2) {
        swap(s1, s2);
    }

    cout << "In alphabetical order: " << s1 << ", " << s2 << ", " << s3 << endl;
    return 0;
}