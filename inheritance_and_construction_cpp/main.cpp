//
//  main.cpp
//  inheritance_and_construction_cpp
//
//  Created by Davide Orrù on 02/07/21.
//

#include <iostream>

//  Constructors are not inherited by subclasses
//  a hierarchical class would look like this

class Machine{
private:
    int id_default = 0;
    int id;
public:
    Machine(): id(this->id_default) {
        std::cout << "Machine no-argument constructor called" << std::endl;
    }
    Machine(int id): id(id){
        std::cout << "Machine wt-argument constructor called" << std::endl;
    }
    void info(){std::cout << "ID: " << id << std::endl;}
};

class Vehicle: public Machine{
public:
    Vehicle() {
        std::cout << "Vehicle no-argument constructor called" << std::endl;
    }
    Vehicle(int id): Machine(id){
//  vehicle has no access to the private attribute "id" of machine so to change it it needs to inherits Machine's class parametrized constructor
        std::cout << "Vehicle wt-argument constructor called" << std::endl;
    }
};

class Car: public Vehicle{
public:
    Car(): Vehicle(999){
        std::cout << "Car no-argument constructor called" << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    Machine machine1;
    machine1.info();
    
    Machine machine2(10);
    machine2.info();
    
    Vehicle vehicle1;
    vehicle1.info();
    
    Vehicle vehicle2(100);
    vehicle2.info();
    
    Car car1;
    car1.info();
    return 0;
}
