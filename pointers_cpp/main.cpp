//
//  main.cpp
//  pointers_cpp
//
//  Created by Davide Orrù on 30/06/21.
//

#include <iostream>

void manipulate_by_reference(double *pValue){
//    we pass the address of a double that is stored in the pointer *pValue
//    we output the value stored at that address (2.)
//    we update the value stored at that address
//    we output the updated value at that address (3.)
    std::cout << "2. Value of double in manipulate: " << *pValue << std::endl;
    *pValue = 10.0; //dereference
    std::cout << "3. Value of double in manipulate: " << *pValue << std::endl;
}


int main(int argc, const char * argv[]) {
    int nValue = 8;
    int *pnValue = &nValue;
    
    std::cout << "int value: " << nValue << std::endl;
    std::cout << "int address: " << &nValue << std::endl;
    std::cout << "Pointer to int address: " << pnValue << std::endl;
    std::cout << "int value via pointer (dereferencing): " << *pnValue << std::endl;
    std::cout << "=========================================" << std::endl;
    
    double dValue = 123.4;
//    we want to update dValue without making copies of it
    std::cout << "1. Value of double in main: " << dValue << std::endl;
    manipulate_by_reference(&dValue);
    std::cout << "4. Value of double in main: " << dValue << std::endl;

    return 0;
}
