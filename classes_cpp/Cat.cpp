//
//  Cat.cpp
//  classes_cpp
//
//  Created by Davide Orrù on 28/06/21.
//
#include <iostream>

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "cat created" << std::endl;
    happy = true;
}

Cat::~Cat() {
    std::cout << "cat destroyed" << std::endl;
}


void Cat::speak() {
    if(happy) {
        std::cout << "Meoooowww" << std::endl;
    }
    else {
        std::cout << "Sssssssss" << std::endl;
    }
}

void Cat::jump() {
    std::cout << "Jumping" << std::endl;
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}
