
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float marks1, marks2, marks3;
    float total, percentage;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter marks for Subject 1 (out of 100): ";
    cin >> marks1;

    cout << "Enter marks for Subject 2 (out of 100): ";
    cin >> marks2;

    cout << "Enter marks for Subject 3 (out of 100): ";
    cin >> marks3;

    if (marks1 < 0 || marks1 > 100 ||
        marks2 < 0 || marks2 > 100 ||
        marks3 < 0 || marks3 > 100) {
        cout << "Invalid marks. Enter marks from 0 to 100.";
        return 1;
    }

    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100;

    cout << "\n--- Student Result ---\n";
    cout << "Name: " << name << endl;
    cout << "Total: " << total << " / 300" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 50)
        cout << "Status: Pass" << endl;
    else
        cout << "Status: Fail" << endl;

    return 0;
}
