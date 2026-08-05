/*
&& = check if two conditions are true
|| = check if at least one of two conditions is true
! = reverses the logical state of its operand
*/

#include <iostream>

int main() {

    int temp;
    
    //&& checking if two conditions are true
    std::cout << "Enter the temperature: " <<std::endl;
    std::cin >> temp;

    if (temp > 0 && temp < 30){
        std::cout << "The temperature is good!";
    }
    else{
        std::cout << "The temperature is bad!"; 
    }
    
    //|| checking if at least one of two conditions are true
    std::cout << "Enter the temperature: " <<std::endl;
    std::cin >> temp;

    if (temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!";
    }
    else{
        std::cout << "The temperature is good!";
    }

    return 0;
}