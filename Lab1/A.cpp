#include <iostream>

using namespace std;

double Fahrenheit (double C) {
    return 9 * C / 5 + 32.0;
}

int main() {
    double C;
    cout << "Enter a temperature in degrees Celsius : " << endl;
    cin >> C;
    cout << "Temperature in degrees fahrenheit is : " <<  Fahrenheit(C) << endl;
}
