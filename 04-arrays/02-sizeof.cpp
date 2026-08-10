/*
sizeof() = determines the size in bytes of a:
            variable, data type, class, objects, etc.
*/

#include <iostream>

int main(){

    std::string name = "Sid";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << sizeof(gpa) << " bytes" <<std::endl;   //8 bytes
    std::cout << sizeof(name) << " bytes" <<std::endl;  //32 bytes
    std::cout << sizeof(grade) << " bytes" <<std::endl;    //1 bytes
    std::cout << sizeof(student) << " bytes" <<std::endl;  //1 bytes
    std::cout << sizeof(grades) << " bytes" <<std::endl;  //5 bytes

    std::cout << sizeof(grades)/sizeof(char) << " elements" <<std::endl;  //5 elements
    
    return 0;
}