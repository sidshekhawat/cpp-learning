/*
pointers = variable that stores a memory address of another variable
           sometimes it's easier to work with an address
           & address-of operator
           * dereference operator
*/

#include <iostream>

int main(){

    std::string name = "Sid";
    int age = 20;

    std::string *pName = &name;
    int *pAge = &age;

    std::cout << pName  <<std::endl;  //memory address
    std::cout << *pName <<std::endl;  //value stored

    std::cout << pAge  <<std::endl;
    std::cout << *pAge <<std::endl;
    return 0;
}