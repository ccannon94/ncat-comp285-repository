//
//  main.cpp
//  RescursionClassExamples
//
//  Created by Christopher Cannon on 01/Sep/17.
//  Copyright © 2017 c3_development. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n = 0;
    std::cout << "Enter your n value: \n";
    std::cin >> n;
    
    recursiveEquation(n);
    
    std::cin >> String thing;
    
    return 0;
}

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
