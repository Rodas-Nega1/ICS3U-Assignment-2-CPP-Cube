// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sep 2021
// This program calculates the surface area and volume of a cube
//    with side length inputted from the user

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the surface area and volume of a cube
    int sideLength;
    int surfaceArea;
    int volume;

    // input
    std::cout << "Enter the side length of your cube (cm): ";
    std::cin >> sideLength;

    // process
    surfaceArea = 6 * pow(sideLength, 2);
    volume = pow(sideLength, 3);

    // output
    std::cout << "" << std::endl;
    std::cout << "The surface area of the cube is "
    << surfaceArea << " cm²." << std::endl;
    std::cout << "The volume of the cube is " << volume << " cm³." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
