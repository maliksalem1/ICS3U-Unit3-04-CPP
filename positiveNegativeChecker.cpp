// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program sees if a number is negative or positive

#include <iostream>

int main() {
    // This function sees if your number is positive or negative
    const int ZERO = 0;
    int integer;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    std::cout << std::endl;

    // Process and Output
    if (integer > ZERO) {
        std::cout << "" << integer << " is a positive number." << std::endl;
    } else if (integer < ZERO) {
        std::cout << "" << integer << " is a negative number." << std::endl;
    } else {
        std::cout << "Your number is zero" << std::endl;
    }

    std::cout << "\nDone.";
}
