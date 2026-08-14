/*
struct = A structure that group related variables under one name
         structs can contain many different data types (string) int, double, bool, etc.)
         variables in a struct are known as "members"
         members can be access with. "Class Member Access Operator"
*/

#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};  

int main(){

    student student1;
    student1.name = "Sid";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Veer";
    student2.gpa = 2.1;
    student2.enrolled = true;

    std::cout << student1.name <<std::endl;
    std::cout << student1.gpa <<std::endl; 
    std::cout << student1.enrolled  <<std::endl;

    std::cout << student2.name <<std::endl;
    std::cout << student2.gpa <<std::endl; 
    std::cout << student2.enrolled <<std::endl;

    return 0;
}