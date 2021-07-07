//
//  main.cpp
//  twos_complement_cpp
//
//  Created by Davide Orrù on 07/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
//    127 is the maximum value for a char while -128 is the minimum
    char value = 127;
    std::cout << "Maximum value fittable in a char: " << (int)value << std::endl;
    std::cout << "incrementing over the limit..." << std::endl;
    value++;
    std::cout << "New value stored inside char: " << (int)value << std::endl;
    /*
     twos complement:
     000 = 0
     001 = 1
     010 = 2
     011 = 3
     100 = -4
     101 = -3
     110 = -2
     111 = -1
     
      010 (2) +
      110 (-2) =
     1000 -> discard overflow bit -> 000 = 0
     */
    return 0;
}
