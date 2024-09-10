#include <iostream>
#include <cmath>
#include "root.h"

using namespace std;

int main() {
    double x;
    cout << "Give your value for x: ";
    cin >> x;

    cout << "Square root using cmath: " << sqrt(x) << endl;
    cout << "Square root using custom root function: " << root(x) << endl;

    return 0;
}