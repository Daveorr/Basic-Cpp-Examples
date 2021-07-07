//
//  main.cpp
//  namespaces_cpp
//
//  Created by Davide Orrù on 02/07/21.
//

#include <iostream>
#include "angry_cat.hpp"
#include "happy_cat.hpp"

int main(int argc, const char * argv[]) {
    
    angry::Cat angry_cat;
    angry_cat.speak();
    
    happy::Cat happy_cat;
    happy_cat.speak();
    return 0;
}
