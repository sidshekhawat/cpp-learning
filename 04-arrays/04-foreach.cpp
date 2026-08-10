/*
foreach loop = loop that eases the traversal over an iterable data set
*/

#include <iostream>

int main(){

    std::string students[] = {"Sid", "Veer", "Yug", "Lak", "Pra"};

    for(std::string student : students){
        std::cout << student <<std::endl;
    }

    return 0;
}