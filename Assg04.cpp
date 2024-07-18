#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;
    
    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Determine the maximum using switch-case
    switch (num1 > num2) {
        case true:
            cout << "Maximum number is: " << num1 << endl;
            break;
        case false:
            cout << "Maximum number is: " << num2 << endl;
            break;
        default:
            cout << "Numbers are equal." << endl;
            break;
    }
    
    return 0;
}
