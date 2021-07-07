//
//  main.cpp
//  arrays_cpp
//
//  Created by Davide Orrù on 23/06/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Array of INTs" << std::endl;
    std::cout << "=============" << std::endl;
    
    int values[3];
    
    values[0] = 1;
    values[1] = 2;
    values[2] = 3;
    
    for (int i=0; i<2; i++){
        std::cout << "Element at index " << i << ": " << values[i] << std::endl;
    }
    
    std::cout << "Array of doubles" << std::endl;
    std::cout << "=============" << std::endl;
    
    double numbers[4] = {1.1, 2.2, 3.3, 4.4};
    
    for (int i=0; i<3; i++){
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }
    
    std::cout << "Array of strings" << std::endl;
    std::cout << "=============" << std::endl;
    
    std::string texts[] = {"apple", "banana", "orange"};
    
    for (int i=0; i<3; i++){
        std::cout << "Element at index " << i << ": " << texts[i] << std::endl;
    }
    
    return 0;
}
