//
//  main.cpp
//  copy_constructor_cpp
//
//  Created by Davide Orrù on 02/07/21.
//

#include <iostream>

class Animal{
private:
    std::string name;
public:
    Animal() {std::cout << "Animal Created." << std::endl;}; // constr
    Animal(const Animal &other): name(other.name) { std::cout << "Animal Created by Copy" << std::endl;}; // copy constructor
    void setName(std::string newName){this->name = newName;};
    void speak() const {std::cout << "My name is: " << name << std::endl;};
};

int main(int argc, const char * argv[]) {
    
    Animal animal1;
    animal1.setName("Freddy");
    animal1.speak();
    
    Animal animal2 = animal1; // triggers copy constructor
    animal2.speak();
    
    animal2.setName("Bob");
    animal2.speak();
    
    Animal animal3(animal1); // another way to trigger copy constructor
    animal3.speak();
    
    return 0;
}
