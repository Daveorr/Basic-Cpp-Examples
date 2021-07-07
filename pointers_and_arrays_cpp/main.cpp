//
//  main.cpp
//  pointers_and_arrays_cpp
//
//  Created by Davide Orrù on 30/06/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::string texts[] = {"one", "two", "three"};
    std::string *pTexts = texts; // pointer to the first element of the array
    
//  Loop thorough an array using a pointer, with array reference syntax
    for (int i=0; i < sizeof(texts)/sizeof(std::string); i++){
        std::cout << pTexts[i] << "   " << std::flush;
    }
    std::cout << std::endl;
    
//  Loop through an array by incrementing a pointer
    for (int i=0; i < sizeof(texts)/sizeof(std::string); i++, pTexts++){
        std::cout << *pTexts << "   " << std::flush;
    }
    std::cout << std::endl;

//  Loop through an array, stopping by comparing two pointers
    std::string *pElement = &texts[0]; // pointer to the first array element
    std::string *pEnd = &texts[2]; // pointer to the final array element
    
    while(true){
        std::cout << *pElement << "   " << std::flush;
        
        if(pElement == pEnd){
            std::cout << std::endl;
            std::cout << pElement << " == " << pEnd << " exiting..." << std::endl;
            break;
        }
        pElement++;
    }
    
    return 0;
}
