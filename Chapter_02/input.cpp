// read and write a first name
#include <iostream> // gain access to the C++ standard library
using namespace std;

int main()
{
    cout << "Please enter your first name (followed by 'enter'):\n";
    string first_name; // first_name is a var iable of type string
    cin >> first_name; // read characters into first_name
    cout << "Hello, " << first_name << "!\n";

    return 0;
}