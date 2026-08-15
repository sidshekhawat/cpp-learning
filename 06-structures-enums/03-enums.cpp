/*
enums = a user-defined data type that consists of paired named-integer constants.
        GREAT if you have a set of potential options
*/

#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){

    Day today =  sunday;

    switch(today){
        case sunday: std::cout << "It is Sunday!" <<std::endl;
            break;
        case monday: std::cout << "It is Sunday!" <<std::endl;
            break;
        case tuesday: std::cout << "It is Sunday!" <<std::endl;
            break;
        case wednesday: std::cout << "It is Sunday!" <<std::endl;
            break;
        case thursday: std::cout << "It is Sunday!" <<std::endl;
            break;
        case friday: std::cout << "It is Sunday!" <<std::endl;
            break;
        case saturday: std::cout << "It is Sunday!" <<std::endl;
            break;
    }
    
    return 0;
    
}