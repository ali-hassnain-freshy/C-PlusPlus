#include <iostream>
using namespace std;

int main() {
    double temp;
    string unit;

    cout << "What unit is your temperature in (C/F): ";
    cin >> unit;

    cout << "Enter temperature in " << unit << ": ";
    cin >> temp;

    if (unit == "F" || unit == "f") {
        cout << temp << "°F converted to Celsius is: " << (temp - 32.0) / 1.8 << "°C" << endl;
    } else if (unit == "C" || unit == "c") {
        cout << temp << "°C converted to Fahrenheit is: " << (temp * 1.8) + 32.0 << "°F" << endl;
    } else {
        cout << "Invalid unit entered. Please enter 'C' or 'F'." << endl;
    }

    return 0;
}
