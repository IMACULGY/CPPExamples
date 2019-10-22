#include <iostream>

using namespace std;

void displayMenu();
int getUserChoice();
void displayResults(int choice);
string convertTo24HourNotation(int hour, bool am);
string convertTo12HourNotation(int hour);

void displayMenu() {
    cout << "Time Conversion Menu" << endl;
    cout << "---------------------" << endl;
    cout << "1). Convert from 12-hour to 24-hour notation" << endl;
    cout << "2). Convert from 24-hour to 12-hour notation" << endl;
    cout << "3). Exit" << endl << endl;
}

int getUserChoice() {
    int choice = 0;

    while (choice == 0) {
        cout << "Enter choice: ";
        cin >> choice;

        if (choice > 0 && choice < 4) {
            return choice;
        } else {
            cout << "Please select a valid option." << endl << endl;
            choice = 0;
        }
    }
}

void displayResults(int choice) {
    string convertedTime = "";

    if (choice == 1) {
        int hour = 0;
        char am = 'a';
        string label = "";

        bool valid = false;

        while (!valid) {
            cout << endl << "Please enter the time (in hours): ";
            cin >> hour;

            cout << "AM or PM (a/p)? ";
            cin >> am;

            if (hour > 0 && hour < 13) {
                if (am == 'a') {
                    valid = true;
                    label = "AM";
                    convertedTime = convertTo24HourNotation(hour, true);
                } else if (am == 'p') {
                    valid = true;
                    label = "PM";
                    convertedTime = convertTo24HourNotation(hour, false);
                }
            }

            if (!valid)
                cout << endl << "Please enter a valid time." << endl;
        }

        cout << endl << "The 24-hour notation for " << hour << label << " is " << convertedTime << "." << endl << endl;
    } else if (choice == 2) {
        int hour = 0;
        bool valid = false;

        while (!valid) {
            cout << endl << "Please enter the time (in hours): ";
            cin >> hour;

            if (hour > 0 && hour < 25) {
                valid = true;
                convertedTime = convertTo12HourNotation(hour);
            }

            if (!valid)
                cout << endl << "Please enter a valid time." << endl;
        }

        cout << endl << "The 12-hour notation for " << hour << " is " << convertedTime << "." << endl << endl;
    }
}

string convertTo24HourNotation(int hour, bool am) {
    int convertedTime = 0;

    if (am == true) {
        convertedTime = hour;
    } else {
        convertedTime = 12 + hour;
    }

    return to_string(convertedTime);
}

string convertTo12HourNotation(int hour) {
    int convertedTime = 0;
    string am = "";

    if (hour < 13) {
        convertedTime = hour;
        am = "AM";
    } else {
        convertedTime = hour - 12;
        am = "PM";
    }

    return to_string(convertedTime).append(am);
}

int main() {

    displayMenu();
    
    int userChoice = getUserChoice();

    displayResults(userChoice);

    return 0;
}