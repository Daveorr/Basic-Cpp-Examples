//
//  main.cpp
//  pointers_arithmetic_cpp
//
//  Created by Davide Orrù on 01/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    const int NSTRINGS = 5;
    
    std::string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};
    std::string *pTexts = texts; // pointer to first element
    std::cout << *pTexts << std::endl;
    
//    pointer addition
    pTexts += 3;
    std::cout << *pTexts << std::endl;
//    pointer subtraction
    pTexts -= 2;
    std::cout << *pTexts << std::endl;
//    pointer comparison
    std::string *pEnd = &texts[NSTRINGS];
    pTexts = &texts[0]; // set pText back to starting element
    
    while(pTexts != pEnd){
        std::cout << *pTexts << std::endl;
        pTexts++;
    }
    return 0;
}
