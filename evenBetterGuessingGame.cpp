// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program  is a guessing number game

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    std::string number_input;
    int number_integer;
    int number_random;

    std::cout << "Try to guess a number from 0 to 9:" << std::endl;

    std::cin >> number_input;

    try {
        number_integer = std::stoi(number_input);

        std::random_device rseed;

        std::mt19937 rgen(rseed());

        std::uniform_int_distribution<int> idist(0, 9);

        number_random = idist(rgen);

        if (number_integer == number_random) {
            std::cout << "\nCongratulations, guessed right!" << std::endl;
        } else {
            std::cout << "\nSorry, guessed wrong! The right number was " <<
            number_random << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nThis input is invalid, please, insert an integer."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
