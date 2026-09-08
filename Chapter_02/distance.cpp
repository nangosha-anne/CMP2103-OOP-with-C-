// Write a program that takes two coordinate points and outputs the distance between the two points.
// Example: (x1, y1) and (x2, y2)
// plane distance is given by sqrt((x1-x2)**2 * (y1-y2)**2).
#include <iostream>
#include <cmath>
using namespace std;

int main() // read name and age
//{
   /* cout << "Please enter coordinates\n";
    
    // Initialize coordinate values
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    // Why not initialize as below
    // int x1, y1, x2, y2 = 0;

    cin >> x1 >> y1 >> x2 >> y2; // Read coordinate values

    double sum_of_powers = 0.0;
    sum_of_powers = pow(x1 - x2, 2) + pow(y1 - y2, 2);

    double distance = sqrt(sum_of_powers); // Calculate distance

    // std::cout << "Distance between coordinates " << '(' <<x1 << ',' << y1 << ')' <<  " and " << '(' <<x2 << ',' << y2 << ')' << " is " << distance << "\n";

    // print
    cout << "Distance between coordinates (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << distance << "\n";

    return 0;
} /*

// Try
// The distance calculated above is true for a 2D plane.
// For spherical surfaces such as the Earth, the Haversine formula is used. Reference: https://scikit-learn.org/stable/modules/generated/sklearn.metrics.pairwise.haversine_distances.html
// Rewrite this program to calculate the distance Makerere University Freedom Square and Entebbe Airport.
*/

#include <iostream>
#include <cmath>
using namespace std;

double toRadians(double degree)
{
    const double PI = 3.141592653589793;
    return degree * PI / 180.0;
}

int main()
{
    // Makerere University Freedom Square coordinates
    double lat1 = 0.3350;
    double lon1 = 32.5697;

    // Entebbe Airport coordinates
    double lat2 = 0.0424;
    double lon2 = 32.4434;

    const double earthRadius = 6371.0; // km

    double lat1Rad = toRadians(lat1);
    double lat2Rad = toRadians(lat2);
    double deltaLat = toRadians(lat2 - lat1);
    double deltaLon = toRadians(lon2 - lon1);

    double a = sin(deltaLat / 2.0) * sin(deltaLat / 2.0) +
               cos(lat1Rad) * cos(lat2Rad) *
               sin(deltaLon / 2.0) * sin(deltaLon / 2.0);

    double c = 2.0 * atan2(sqrt(a), sqrt(1.0 - a));
    double distance = earthRadius * c;

    cout << "Distance between Makerere University Freedom Square and Entebbe Airport is "
         << distance << " km\n";

    return 0;
}
