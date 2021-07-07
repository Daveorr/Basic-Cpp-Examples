//
//  main.cpp
//  stringstream_cpp
//
//  Created by Davide Orrù on 28/06/21.
//

#include <iostream>
#include <sstream>

int main(int argc, const char * argv[]) {
    
    std::string name = "Bob";
    int age = 32;
    
    std::stringstream ss;
    
    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;
    
    std::string info = ss.str();
    
    std::cout << info << std::endl;
    
    return 0;
}
