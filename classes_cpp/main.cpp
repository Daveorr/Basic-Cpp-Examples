//
//  main.cpp
//  classes_cpp
//
//  Created by Davide Orrù on 28/06/21.
//

#include <iostream>
#include "Cat.hpp"

int main(int argc, const char * argv[]) {
    
    {
    Cat cat;
    cat.makeSad();
    cat.speak(); // cat is destroyed here - end of scope
    }
    
    Cat cat;
    cat.makeHappy();
    cat.speak();
    cat.jump();
    
    return 0;
}
