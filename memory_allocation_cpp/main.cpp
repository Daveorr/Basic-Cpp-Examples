//
//  main.cpp
//  new_operator_cpp
//
//  Created by Davide Orrù on 02/07/21.
//
#include <iostream>

class Animal{
private:
    std::string name;
public:
    Animal() {
        std::cout << "Animal Created." << std::endl;
    }; // constr
    ~Animal(){
        std::cout << "Destructor Called" << std::endl;
    };
    Animal(const Animal &other):name(other.name) {
        std::cout << "Animal Created by Copy" << std::endl;
    }; // copy constructor
    void setName(std::string newName){
        this->name = newName;
    };
    void speak() const {
        std::cout << "My name is: " << name << std::endl;
    };
};


int main(int argc, const char * argv[]) {
//    the new constructor together with pointer is a way of allocating memory
    Animal *pAnimal = new Animal[10]; // allocate enough memory fo 10 animal objects
    
    pAnimal[5].setName("George");
    pAnimal[5].speak();
    
    delete [] pAnimal; // free the memory allocated for 10 animal objects
    
//    allocate/deallocate 1000 bytes of memory
    char *pMem = new char[1000];
    delete [] pMem;
    return 0;
}
 
