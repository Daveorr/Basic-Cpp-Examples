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

Animal *createAnimal(){
    Animal *pAnimal = new Animal();
    pAnimal->setName("Froggie");
    return pAnimal;
}

int main(int argc, const char * argv[]) {
    Animal *pCat1 = new Animal(); // allocate memory for a new object
    pCat1->setName("Freddy");
    pCat1->speak();
//    when done ALWAYS REMEMBER TO DEALLOCATE MEMORY
//    call destructor to free the memory allocated to the object
//    MEMORY WILL STAY OCCUPIED if object not destroyed
    delete pCat1;
    
//    returning objects from functions without creating copies
    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete pFrog;
    
    return 0;
}
