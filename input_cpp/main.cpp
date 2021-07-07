//
//  main.cpp
//  input_cpp
//
//  Created by Davide Orrù on 23/06/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Enter your name: " << std::flush;
    std::string input;
    std::cin >> input;
    
    std::cout << "you entered " << input << std::endl;
    return 0;
}
