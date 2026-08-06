/*
do while loop = do some block of code first,
                THEN repeat again if condition is true
*/

#include <iostream>

int main(){

    int number;

    do{
        std::cout << "Enter a positive number: " <<std::endl;
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number is " << number <<std::endl;

    return 0;
}