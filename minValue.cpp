// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 31, 2022
// This program find the min value in an array
// of random integers
#include <time.h>
#include <iostream>
#include <iomanip>
#include <random>
#include <array>



const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;
const int RANGE = MAX_NUM - MIN_NUM;


template<size_t N>
int calculateMinValue(std::array<int, N> listOfNumbers) {
    // This function calculates the min
    int minValue = listOfNumbers[0];
    // Loop that calculates the min value
    for (int aSingleElement : listOfNumbers) {
        if (minValue > aSingleElement) {
            minValue = aSingleElement;
        }
    }
    return minValue;
}


int main() {
    // This function creates the array and
    // fills the array
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;
    int randomNumber;
    int num;
    int minV;
    srand(time(NULL));
    for (int counter = 0; counter < 10; counter++) {
        // Generating random number

        randomNumber = (rand() % RANGE+1) + MIN_NUM;

        num = randomNumber;

        arrayOfInt[counter] = randomNumber;

        std::cout << randomNumber << " added to position " << counter << "\n";
    }
    minV = calculateMinValue(arrayOfInt);
    std::cout << " \n";
    std::cout << "The minimum value is: " << minV;
}
