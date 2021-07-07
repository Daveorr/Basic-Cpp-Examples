//
//  main.cpp
//  arrays_and_functions_cpp
//
//  Created by Davide Orrù on 02/07/21.
//

#include <iostream>

void show1(const int nElements, std::string inArray[]){
//    don't use sizeof(inArray) that will just return a size of a pointer (8)
    for(int i=0; i<nElements; i++){
        std::cout << inArray[i] << std::endl;
    }
}

void show2(const int nElements, std::string *inArray){
//    don't use sizeof(inArray) that will just return a size of a pointer (8)
    for(int i=0; i<nElements; i++){
        std::cout << inArray[i] << std::endl;
    }
}

//    allocate memory function:
char *getMemory(){
    char *pMem = new char[100]; // allocate 100 bytes
    return pMem;
}
//    deallocate memory function:
void freeMemory(char *pMem){
    delete pMem;
}

int main(int argc, const char * argv[]) {
    
    std::string texts[] = {"apple","orange","banana"};
    std::cout << sizeof(texts) << std::endl;
    
    show1(sizeof(texts)/sizeof(std::string), texts);
    show2(sizeof(texts)/sizeof(std::string), texts);
    
    char *pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}
