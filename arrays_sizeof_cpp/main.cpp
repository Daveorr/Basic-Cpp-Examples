//
//  main.cpp
//  arrays_sizeof_cpp
//
//  Created by Davide Orrù on 23/06/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int values[] = {4, 7, 3, 2};
    
    std::cout << "array length: " << sizeof(values) << std::endl;
    std::cout << "INT elem length: " << sizeof(int) << std::endl;
    
    for(int i=0; i<sizeof(values)/sizeof(int); i++){
        std::cout << values[i] << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
