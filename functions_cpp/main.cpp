//
//  main.cpp
//  functions_cpp
//
//  Created by Davide Orrù on 23/06/21.
//

#include <iostream>

void showMenu(){
    std::cout << "1 : Search Item" << std::endl;
    std::cout << "2 : View Item" << std::endl;
    std::cout << "1 : Quit" << std::endl;
    return;
}

int getInput(){
    int input;
    std::cin >> input;
    return input;
}

void processInput(int input){
    switch(input){
        case 1:
            std::cout << "searching ..." << std::endl;
            break;
        case 2:
            std::cout << "viewing ... " << std::endl;
            break;
        case 3:
            std::cout << "quitting ..." << std::endl;
            break;
        default:
            std::cout << "not recognized" << std::endl;
        return;
    }
}

int main(int argc, const char * argv[]){
    showMenu();
    int input = getInput();
    processInput(input);
    return 0;
}
