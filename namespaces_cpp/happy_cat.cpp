//
//  happy_cat.cpp
//  namespaces_cpp
//
//  Created by Davide Orrù on 02/07/21.
//

#include "happy_cat.hpp"
using namespace happy;

Cat::Cat() {std::cout << "cat created" << std::endl;}
Cat::~Cat() {std::cout << "cat destroyed" << std::endl;}
void Cat::speak() {std::cout << "purrrrrrr" << std::endl;}
