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
    
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            std::cout << multi_animals[i][j] << std::endl;
        }
        std::cout << std::endl;
    }
    
    return 0;
}
