/*
user input = cout «< (insertion operator)
             cin >> (extraction operator)
*/

#include <iostream>

int main() {

    std::string fullname;
    std::string name;
    int age;

    std::cout << "What's your full name? :";
    std::getline(std::cin, fullname);              //lets us enter the space

    std::cout << "What's your sweet name? : ";
    std::cin >> name;

    std::cout << "What's your age? : ";
    std::cin >> age;

    std::cout << "That preety good name you've got here " << fullname <<std::endl;
    std::cout << "Hello " << name <<std::endl;
    std::cout << "You are " << age << " years old!" <<std::endl;

    return 0;
    
}

//std: getline(std:: cin » std::ws, name);       //>>std::ws,  helps if we have a std::cin above std::getline

 