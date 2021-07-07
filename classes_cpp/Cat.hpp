//
//  Cat.hpp
//  classes_cpp
//
//  Created by Davide Orrù on 28/06/21.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>

class Cat {

private:
    bool happy;
    
public:
    void speak();
    void jump();
    void makeHappy();
    void makeSad();
    
    // constructor and destructor
    Cat();
    ~Cat();
};

#endif /* Cat_hpp */
