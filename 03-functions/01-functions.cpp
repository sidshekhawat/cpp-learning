// function = a block of reusable code

#include <iostream>

void HappyBirthday(std::string name, int age);

int main(){

    std::string name = "SID";
    int age = 20;

    HappyBirthday(name, age);

    return 0;
}

void HappyBirthday(std::string name, int age){
    std::cout << "Happy Birthday " << name <<std::endl;
    std::cout << "So you are " << age << " years old" <<std::endl;
}

