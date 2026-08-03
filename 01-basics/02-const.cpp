/*  
The const keyword specifies that a variable's value is constant and cannot be changed.(Read Only). It is used to declare constants in C++.
*/


#include <iostream>

int main() {
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << "Circumference : " << circumference << "cm" <<std::endl;

    return 0;
}

//Other examples

//const int WIDTH = 1920;
//const int HEIGHT = 1080;