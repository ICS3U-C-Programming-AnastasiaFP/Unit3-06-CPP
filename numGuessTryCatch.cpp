// Copyright 2023 Anastasia Friedenstein Patino
// Created on : October.26, 2023
// Guessing game of numbers 1 to 9 with try catch

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::string guessAsString;

    // Generate a random number between 1 and 9
    int randomNumber = std::rand() % 9 + 1;

    // Get the user's guess

    std::cout << "Enter your guess: ";
    std::cin >> guessAsString;

    int guessAsInt;

    try {
        // convert the user's guess to an int
        guessAsInt = std::stoi(guessAsString);
        // Check if the guess is correct
        if (guessAsInt == randomNumber) {
            std::cout << "You guessed correctly!" << std::endl;
        } else {
            std::cout << "Wrong.The answer was:" << randomNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << guessAsString << " is not an integer.\n";
    }





    return 0;
}
