#include <iostream>

int main(){

    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: " <<std::endl;
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name <<std::endl;

    /*while(1==1){
        std::cout << "Help I'm stuck in an Infinite loop" <<std::endl;
    }*/

    std::cout << "Hello " << name <<std::endl;

    return 0;
}