//
//  main.cpp
//  Activity-23
//
//  Created by Juwon Hong on 10/21/24.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool CustomerNumberFormat(const string& customerNumber) {
    if (customerNumber.size() != 6) {
        return false;
    }

    // Check if the first two characters are alphabetic
    if (!isalpha(customerNumber[0]) || !isalpha(customerNumber[1])) {
        return false;
    }

    // Check if the last four characters are numeric
    for (int i = 2; i < 6; ++i) {
        if (!isdigit(customerNumber[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;
    
    cout << "Enter a customer number: ";
    cin >> input;
    
    if (CustomerNumberFormat(input)) {
        cout << "Valid customer number." << endl;
    } else {
        cout << "Invalid customer number." << endl;
    }
    
    return 0;
}

