//
//  main.cpp
//  bit_shifting_cpp
//
//  Created by Davide Orrù on 05/07/21.
//

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    //  0xFF123456 desired outcome for color
    //  each one of the following is 1 byte
    
    unsigned char alpha = 0xFF;
    unsigned char red = 0x12;
    unsigned char green = 0x34;
    unsigned char blue = 0x56;
    unsigned int color = 0;
    
    std::cout << "target: FF123456" << std::endl;
    
    // set alpha in the least significant byte - LSB (all-left)
    color += alpha;
    std::cout << std::setfill('0') << std::setw(8) << std::hex << color << std::endl;
    // move everything left of 8 bit (1 byte -> 2 digits) and add red at LSB
    color <<= 8;
    color += red;
    std::cout << std::setfill('0') << std::setw(8) << std::hex << color << std::endl;
    // move everything left of 8 bit (1 byte -> 2 digits) and add green at LSB
    color <<= 8;
    color += green;
    std::cout << std::setfill('0') << std::setw(8) << std::hex << color << std::endl;
    // move everything left of 8 bit (1 byte -> 2 digits) and add blue at LSB
    color <<= 8;
    color += blue;
    std::cout << std::setfill('0') << std::setw(8) << std::hex << color << std::endl;
    
    return 0;
}
