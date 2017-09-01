//
//  main.cpp
//  RescursionClassExamples
//
//  Created by Christopher Cannon on 01/Sep/17.
//  Copyright © 2017 c3_development. All rights reserved.
//

#include <iostream>

int recursiveEquation(int n) {
    int Dn = 0;
    
    if(n < 0) {
        return -1;
    }
    
    if(n < 1){
        return 1;
    }
    
    if(n < 2){
        return 2;
    }
    
    Dn = n * (recursiveEquation(n-1) + recursiveEquation(n-2));
    
    return Dn;
}

int main(int argc, const char * argv[]) {
    int n = 0;
    std::cout << "Enter your n value: \n";
    std::cin >> n;
    
    int Dn = recursiveEquation(n);
    
    std::cout<<"Dn = "<<Dn;
    std::string endInput;
    std::cin >> endInput;
    
    return 0;
}

