//
//  customer.cpp
//  Activity-23
//
//  Created by Juwon Hong on 10/23/24.
//

#include <cctype>
#include "customer.h"

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
