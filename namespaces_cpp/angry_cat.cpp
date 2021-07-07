//
//  angry_cat.cpp
//  namespaces_cpp
//
//  Created by Davide Orrù on 02/07/21.
//

#include "angry_cat.hpp"
using namespace angry;

Cat::Cat() {std::cout << "cat created" << std::endl;}
Cat::~Cat() {std::cout << "cat destroyed" << std::endl;}
void Cat::speak() {std::cout << "Sssssssss" << std::endl;}
