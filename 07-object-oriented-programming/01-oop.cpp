/*
Object = A collection of attributes and methods
         They can have characteristics and could peform actions
         Can be used to mimic real world items (ex. Phone, Book, Dog)
         Created from a class which acts as a "blue-print"
*/

#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating" <<std::endl;
        }
        void drink(){
            std::cout << "This person is drinking" <<std::endl;
        }
        void sleep(){
            std::cout << "This person is sleeping" <<std::endl;
        }
};

int main(){

    Human human1;

    human1.name = "Sid";
    human1.occupation = "Student";
    human1.age = 20;

    std::cout << human1.name <<std::endl;
    std::cout << human1.occupation <<std::endl;
    std::cout << human1.age <<std::endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;  
} 