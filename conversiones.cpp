
#include <iostream>
using namespace std;

int main () {

    int conv{};

    cout << "What conversion you want to do?" << endl;
    cout << "1.Meters to cm or vice versa" << endl;
    cout << "2.Meters to inches or vice versa" << endl;
    cout << "3.Meters to feet or vice versa" << endl;
    cin >> conv;

    if (conv == 1) {
            int selection{0};

            cout << "1. From meters to cm" << endl;
            cout << "2.From cm to meters" << endl;
            cin >> selection;

            if (selection == 1) {
                float m;
                cout << "Meters: " << endl;
                cin >> m;
                cout << m * 100 << "cm" << endl;


            } else if (selection == 2) {
                float cm;
                cout << "Centimeters: " << endl;
                cin >> cm;
                cout << cm / 100 << "m" << endl;
            } else {
                cout << "Invalid";

            }
    } else if (conv == 2) {
            int selection{0};

            cout << "1. From meters to inches" << endl;
            cout << "2.From inches to meters" << endl;
            cin >> selection;

            if (selection == 1) {
                float m;
                cout << "Meters: " << endl;
                cin >> m;
                cout << m * 39.3701 << "inches" << endl;

            } else if (selection == 2) {
                float inches;
                cout << "Inches: " << endl;
                cin >> inches;
                cout << inches / 39.3701 << "m" << endl;
            } else {
                cout << "Invalid";
            }

    } else if (conv == 3) {
            int selection{0};

            cout << "1. From meters to feet" << endl;
            cout << "2.From feet to meters" << endl;
            cin >> selection;

            if (selection == 1) {
                float m;
                cout << "Meters: " << endl;
                cin >> m;
                cout << m * 3.28084 << " feet" << endl;

            } else if (selection == 2) {
                float feet;
                cout << "Feet: " << endl;
                cin >> feet;
                cout << feet / 3.28084 << "m" << endl;

            } else {
                cout << "Invalid";
            }

    } else {
            cout << "Invalid";
        }

    return 0;
    }



