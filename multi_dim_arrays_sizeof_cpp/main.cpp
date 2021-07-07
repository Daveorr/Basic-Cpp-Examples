//
//  main.cpp
//  multi_dim_arrays_cpp
//
//  Created by Davide Orrù on 23/06/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::string multi_animals[2][3]{
        {"fox","dog","cat"},
        {"mouse","rat","harambe"}
    };
    
    std::cout << "multi array size: " << sizeof(multi_animals) << std::endl;
    std::cout << "multi array row 1 size: " << sizeof(multi_animals[0]) << std::endl;
    std::cout << "multi array row 2 size: " << sizeof(multi_animals[1]) << std::endl;
    std::cout << "string size: " << sizeof(std::string) << std::endl;
    
    
    for(int i=0; i<sizeof(multi_animals)/sizeof(multi_animals[i]); i++){
        for(int j=0; j<sizeof(multi_animals[i])/sizeof(std::string); j++){
            std::cout << multi_animals[i][j] << std::endl;
        }
        std::cout << std::endl;
    }
    
    return 0;
}
