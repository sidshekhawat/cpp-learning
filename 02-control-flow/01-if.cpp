/*
if statements = do something if a condition is true.
                if not, then don't do it.
*/

#include <iostream>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "Welcome to the site!" <<std::endl;
    }

    else if(age < 0){
        std::cout << "Are you for real!" <<std::endl;
    }
    
    else {
        std::cout << "You're not old enough to enter!" <<std::endl;
    }

    return 0;
}