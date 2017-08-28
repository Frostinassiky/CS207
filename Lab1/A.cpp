#include <iostream>
using namespace std;

double Fahrenheit (double C) {
	return 9 * C / 5 + 32.0;
}

int main() {
	double C;
	while(1){
    		cout << "Enter a temperature in degrees Celsius: " ;
		cin >> C;
		while(!cin){
			cin.clear();
			cin.ignore();
			cout << "Input error! Please re-input the number: " ;
			cin >> C;
		}
		cout << "Temperature in degrees fahrenheit is: " <<  Fahrenheit(C) << endl;
		cout << "-- Press Ctrl+C to quit --" << endl;
	}
}
