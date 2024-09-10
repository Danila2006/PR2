#include <iostream>
#include "name.h"

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << printName(name);
}