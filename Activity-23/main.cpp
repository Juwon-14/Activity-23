//
//  main.cpp
//  Activity-23
//
//  Created by Juwon Hong on 10/21/24.
//

#include <iostream>
#include <string>
#include "customer.h"

int main() {
    std::string input;

    std::cout << "Enter a customer number: ";
    std::cin >> input;

    if (CustomerNumberFormat(input)) {
        std::cout << "Valid customer number." << std::endl;
    } else {
        std::cout << "Invalid customer number." << std::endl;
    }

    return 0;
}

