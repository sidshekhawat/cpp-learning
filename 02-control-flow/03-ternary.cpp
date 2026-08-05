/*
ternary operator ?: = replacement to an if/else statement
                      condition? expression1 : expression2;
*/

#include <iostream>

int main() {

    //int number = 7;
    //number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN" <<std::endl;

    bool hungry = true;
    //hungry? std::cout << "You are hungry" : std::cout << "You are full" <<std::endl;
    std:: cout << (hungry ? "You are hungry" : "You are full") <<std::endl;

    return 0;
}