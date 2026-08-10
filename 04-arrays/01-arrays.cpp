/*
array = a data structure that can hold multiple values 
        values are accessed by an index number
        "kind of like a variable that holds multiple values"
*/

#include <iostream>

int main(){

    std::string car[] = {"Corvette", "Mustang", "Camry"};

    std::cout << car[0] <<std::endl;
    std::cout << car[1] <<std::endl;
    std::cout << car[2] <<std::endl;

    ////////////////////////
    
    double prices[4];

    prices [0] = 5.00;
    prices [1] = 7.50;
    prices [2] = 9.99;
    prices [3] = 15.00;

    std::cout << prices[0] <<std::endl;
    std::cout << prices[1] <<std::endl;
    std::cout << prices[2] <<std::endl;
    std::cout << prices[3] <<std::endl;

    return 0;
}