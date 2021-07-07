//
//  main.cpp
//  static_keyword_cpp
//
//  Created by Davide Orrù on 07/07/21.
//

#include <iostream>

// .hpp header file
class Test {
private:
    static int privateCount;
public:
    static int publicCount;
public:
    static int getInfo(){
        return privateCount;
    }
};

// .cpp source file

int Test::privateCount = 7;
int Test::publicCount = 10;

int main(int argc, const char * argv[]) {
    // static methods or attributes are associated to the class, not the object
    // constructor is not called when using static keyword
    std::cout << "Public static attribute: " << Test::publicCount << std::endl;
    std::cout << "Public static method: " << Test::getInfo() << std::endl;
    return 0;
}
