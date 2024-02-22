#include <iostream>
#include <cmath>
using namespace std;

double findAngle(int hour, int minute) {
    if (hour == 12) hour = 0;  // Convert 12-hour format to 24-hour format

    double hourAngle = 0.5 * (hour * 60 + minute);
    double minuteAngle = 6 * minute;

    double angle = abs(hourAngle - minuteAngle);

    return min(360 - angle, angle);
}

int main() {
    int hour, minute;

    cout << "Enter the hour (1-12): ";
    cin >> hour;

    cout << "Enter the minute (0-59): ";
    cin >> minute;

    if (hour < 1 || hour > 12 || minute < 0 || minute > 59) {
        cout << "Invalid input. Please enter valid values.\n";
        return 1;
    }

    double result = findAngle(hour, minute);

    cout << "The shorter angle between the hour and minute hands is: " << result << " degrees." << endl;

    return 0;
}
