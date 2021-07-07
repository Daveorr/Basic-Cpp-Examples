//
//  main.cpp
//  bitwise_and_cpp
//
//  Created by Davide Orrù on 06/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int color = 0x123456; // a RGB color
    /*
     Bitwise AND : &
     
     Color:  10101011000000
     Mask:   11111000000000
     Result: 10101000000000
     */
    
    unsigned char red = (color & 0xFF0000) >> 16;
    unsigned char green = (color & 0x00FF00) >> 8;
    unsigned char blue = (color & 0x0000FF);
    
    std::cout << std::hex << "red: " << (int)red << std::endl;
    std::cout << std::hex << "green: " << (int)green << std::endl;
    std::cout << std::hex << "blue: " << (int)blue << std::endl;

    return 0;
}
