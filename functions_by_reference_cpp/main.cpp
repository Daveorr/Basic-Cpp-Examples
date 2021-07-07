//
//  main.cpp
//  functions_by_reference_cpp
//
//  Created by Davide Orrù on 02/07/21.
//

#include <iostream>

void changeByReference(double &value){
//    change value of referenced input value without duplicating it
    value = 123.4;
}

int main(int argc, const char * argv[]) {
    int value1 = 8;
    int &value2 = value1;
    value2 = 10;
    
    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;
    
    double value = 4.321;
    changeByReference(value); // change value of the var by referencing it
    std::cout << "Value: " << value << std::endl;
    return 0;
}
