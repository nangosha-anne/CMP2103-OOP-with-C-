// write a program that calculates the current through a 200-μF capacitor whose voltage is given;
//        ⎧  50t V          0 < t < 1
// v(t) = ⎪  100 - 50t V    1 < t < 3
//        ⎪  -200 + 50t V   3 < t < 4
//        ⎩  0 V            otherwise

// The program should prompt the user to enter time, t.

#include <iostream>
using namespace std;

int main() {
    const double C = 200e-6;  // 200 microfarads
    double t;

    cout << "Enter time t in seconds: ";
    cin >> t;

    double i = 0.0;

    if (t > 0 && t < 1) {
        i = C * 50.0;        // dv/dt = 50 V/s
    } else if (t > 1 && t < 3) {
        i = C * (-50.0);     // dv/dt = -50 V/s
    } else if (t > 3 && t < 4) {
        i = C * 50.0;        // dv/dt = 50 V/s
    } else {
        i = 0.0;
    }

    cout << "Current, i = " << i << " A" << endl;

    return 0;
}
