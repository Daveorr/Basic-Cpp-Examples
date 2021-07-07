//
//  main.cpp
//  string_reversing_cpp
//
//  Created by Davide Orrù on 01/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    char text[] = "Hello there!";
    int nChars = sizeof(text)-1;
    
    char *pStart = text;
    char *pEnd = &text[nChars-1];
    
    std::cout << "first char: " << *pStart << std::endl;
    std::cout << "last char: " << *pEnd << std::endl;
    std::cout << "-------------------------------" << std::endl;

    while(pStart<pEnd){
        char saved = *pStart;
        *pStart = *pEnd; // substitute last value pointed by *pStart into *pEnd
        *pEnd = saved;
//      move pointers toward array center
        std::cout << "end moved to begin char: " << *pStart << std::endl;
        std::cout << "begin moved to end char: " << *pEnd << std::endl;
        pStart++;
        pEnd--;
    }
    
    std::cout << "reversed: " << text << std::endl;
    
    return 0;
}
