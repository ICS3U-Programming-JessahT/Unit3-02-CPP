// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 10/6/2022
// This program makes the user insert a number from 0-9
// and the output will vary depending on the outcome

#include <iostream>



int main() {
// variables
    float num;

// get user input for random number
    std::cout << "Enter a number from 0 to 9: ";
    std::cin >> num;
    std::cout << "" << std::endl;

// process for if the number is right or wrong

    if (num == 3) {
// output for if the number is correct
        std::cout << "That's correct";
    }

    if (num != 3) {
// output for if the number is incorrect
        std::cout << "That's incorrect";
    }
}
