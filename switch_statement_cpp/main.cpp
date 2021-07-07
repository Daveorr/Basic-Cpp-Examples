//
//  main.cpp
//  switch_statement_cpp
//
//  Created by Davide Orrù on 23/06/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int value = 8;
    switch(value){
        case 4:
            std::cout << "you entered 4" << std::endl;
            break;
        case 5:
            std::cout << "you entered 5" << std::endl;
            break;
        case 6:
            std::cout << "you entered 6" << std::endl;
            break;
        default:
            std::cout << "not recognized" << std::endl;
    }
    return 0;
}
