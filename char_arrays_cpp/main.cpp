//
//  main.cpp
//  char_arrays_cpp
//
//  Created by Davide Orrù on 01/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    char text[] = "hello";
    
//    Output all the chars with a for loop
    for(int i=0; i<sizeof(text); i++){
        std::cout << i << ": " << text[i] << std::endl;
    }
//    0 is the null char terminator
    
    int k = 0;
    
    while(true){
        if(text[k]==0){
            // use the char terminator to exit the loop
            break;
        }
        std::cout << text[k] << std::flush;
        k++;
    }
    return 0;
}
