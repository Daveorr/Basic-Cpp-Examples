//
//  main.cpp
//  prefix_postfix_cpp
//
//  Created by Davide Orrù on 07/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int value1 = 8;
    int value2 = 8;
    std::cout << "prefix (increment then use): " << ++value1 <<std::endl;
    std::cout << "postfix (use then increment): " << value2++ <<std::endl;
    return 0;
}
