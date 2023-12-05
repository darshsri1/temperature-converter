#include <iostream>
#include <iomanip>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9/5 - 459.67;
}

int main() {
    try {
        double temperature;
        string unit;

        cout << "Enter the temperature value: ";
        cin >> temperature;

        cout << "Enter the unit of measurement (Celsius, Fahrenheit, or Kelvin): ";
        cin >> unit;

        cout << fixed << setprecision(2);

        if (unit == "Celsius" || unit == "celsius") {
            double fahrenheit = celsiusToFahrenheit(temperature);
            double kelvin = celsiusToKelvin(temperature);
            cout << temperature << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit and " << kelvin << " Kelvin." << endl;
        } else if (unit == "Fahrenheit" || unit == "fahrenheit") {
            double celsius = fahrenheitToCelsius(temperature);
            double kelvin = fahrenheitToKelvin(temperature);
            cout << temperature << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius and " << kelvin << " Kelvin." << endl;
        } else if (unit == "Kelvin" || unit == "kelvin") {
            double celsius = kelvinToCelsius(temperature);
            double fahrenheit = kelvinToFahrenheit(temperature);
            cout << temperature << " Kelvin is equal to " << celsius << " degrees Celsius and " << fahrenheit << " degrees Fahrenheit." << endl;
        } else {
            cout << "Invalid unit. Please enter Celsius, Fahrenheit, or Kelvin." << endl;
        }
    } catch (...) {
        cout << "Invalid input. Please enter a valid temperature value." << endl;
    }

    return 0;
}
