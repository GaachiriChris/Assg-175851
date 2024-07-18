//Convert Assignment 2 from using if...else to using switch case

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, studCourse;
    cout << "Input The Full Name of the Student:\n";
    getline(cin, fullName);  // Use getline to read the full name

    cout << "Input Student Course: \n";
    getline(cin, studCourse);  // Use getline to read the course

    int score;
    cout << "Input Student Score: \n";
    cin >> score;

    if (cin.fail()) {
        cout << "Invalid score\n";
        return 1; // Exit the program with an error code
    }

    // Convert score to an integer range for switch
    int scoreRange = score / 10;

    switch (scoreRange) {
        case 10: // fall through
        case 9:
        case 8:
        case 7:
            cout << fullName << " attained a grade of A\n";
            break;
        case 6:
            cout << fullName << " attained a grade of B\n";
            break;
        case 5:
            cout << fullName << " attained a grade of C\n";
            break;
        case 4:
            cout << fullName << " attained a grade of D\n";
            break;
        case 3: // fall through
        case 2: // fall through
        case 1: // fall through
        case 0:
            if (score >= 0) {
                cout << fullName << " attained a grade of F\n";
            } else {
                cout << "Invalid score\n";
            }
            break;
        default:
            cout << "Invalid score\n";
            break;
    }

    return 0;
}
