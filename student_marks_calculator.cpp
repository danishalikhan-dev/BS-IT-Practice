
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    string name;
    string subjects[5] = {
        "Programming",
        "Mathematics",
        "English",
        "Computer Science",
        "Information Technology"
    };

    float marks[5];
    float total = 0;
    float percentage;
    bool pass = true;

    cout << "====================================\n";
    cout << "       STUDENT MARKS CALCULATOR     \n";
    cout << "====================================\n";

    cout << "\nEnter student name: ";
    getline(cin, name);

    // Input marks for each subject
    for (int i = 0; i < 5; i++) {

        cout << "Enter marks for " << subjects[i]
             << " (out of 100): ";

        cin >> marks[i];

        // Validate marks
        while (cin.fail() || marks[i] < 0 || marks[i] > 100) {

            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Invalid marks! Enter a value from 0 to 100: ";
            cin >> marks[i];
        }

        total += marks[i];

        // Check subject-wise pass status
        if (marks[i] < 50) {
            pass = false;
        }
    }

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Calculate grade
    char grade;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    // Display result
    cout << "\n\n====================================\n";
    cout << "           STUDENT RESULT           \n";
    cout << "====================================\n";

    cout << "Student Name: " << name << endl;

    cout << fixed << setprecision(2);

    cout << "Total Marks: " << total << " / 500\n";
    cout << "Percentage: " << percentage << "%\n";
    cout << "Grade: " << grade << endl;

    if (pass)
        cout << "Status: PASS\n";
    else
        cout << "Status: FAIL\n";

    cout << "====================================\n";

    return 0;
}
