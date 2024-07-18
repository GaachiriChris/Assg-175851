//write a C++ Program using if..else-if..else condition.
//to output an appropriate full name and grade of student depending on the score entered by the user.
//The user to input the full name of student , the course and the score.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, studCourse;
    cout << "Input The Full Name of the Student:\n";
    getline(cin, fullName);  // Use getline to read the full name

    cout << "Input Student Course: \n";
    getline(cin, studCourse);  // Use getline to read the course

    double score;
    cout << "Input Student Score: \n";
    cin >> score;

    if (score >= 70) {
        cout << fullName << " attained a grade of A\n";
    } else if (score >= 60 && score <= 69) {
        cout << fullName << " attained a grade of B\n";
    } else if (score >= 50 && score <= 59) {
        cout << fullName << " attained a grade of C\n";
    } else if (score >= 40 && score <= 49) {
        cout << fullName << " attained a grade of D\n";
    } else if (score < 40 && score > 0) {
        cout << fullName << " attained a grade of F\n";
    } else {
        cout << "Invalid score\n";
    }

    return 0;
}