// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program adds all numbers together.

#include <iostream>
#include <list>


float sumOfNumbers(std::list<int> listOfNumbers) {
    // This function adds all numbers

    int total = 0;

    for (int eachLoop : listOfNumbers) {
        total = total += eachLoop;
    }
    return total;
}


int main() {
    // This function prints the final answer

    std::list<int> listOfNumbers;
    int finalAnswer = 0;
    int firstInputStrInt = 0;
    int secondInputInt;
    std::string secondInputStr;
    std::string firstInputStr;
    int secondEachLoop = 0;

    // input
    std::cout << "How many numbers do you want to add?: ";
    std::cin >> firstInputStr;
    std::cout << "" << std::endl;

    try {
        firstInputStrInt = std::stoi(firstInputStr);
        for (secondEachLoop; secondEachLoop < firstInputStrInt;
                secondEachLoop++) {
            std::cout << "Enter the number: ";
            std::cin >> secondInputStr;
            secondInputInt = std::stoi(secondInputStr);
            listOfNumbers.push_back(secondInputInt);
        }
        // call function
        finalAnswer = sumOfNumbers(listOfNumbers);
        std::cout << "\nThe sum of all numbers is "
                  << finalAnswer << "." << std::endl;
    } catch (std::invalid_argument) {
            std::cout << "\nInvalid input, try again." << std::endl;
        }

    std::cout << "\nDone."<< std::endl;
}
