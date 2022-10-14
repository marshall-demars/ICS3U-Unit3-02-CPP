// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: October 2022
// This program uses if statements to guess and random number
//    with user input

#include <iomanip>
#include <iostream>

int main() {
    // this function calculates sum of two integers
    int randomNumber;
    const int CHOSEN_NUMBER = 5;

    // input
    std::cout << "Enter a random number between 1 and 9: ";
    std::cin >> randomNumber;

    // process and output
    if (randomNumber == CHOSEN_NUMBER) {
        std::cout << "You guessed correctly!";
    }
    if (randomNumber != CHOSEN_NUMBER) {
        std::cout << "You guessed incorrectly.";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
