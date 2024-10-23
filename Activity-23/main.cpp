//
//  main.cpp
//  Activity-23
//
//  Created by Juwon Hong on 10/21/24.
//

#include <iostream>
#include <string>
#include "customer.h" 

using namespace std;

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
