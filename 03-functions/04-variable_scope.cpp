/*
Local variables = declared inside a function or block {}
Global variables = declared outside of all functions
*/

#include <iostream>

int myNum = 3;       //Global Variable

void printNum();

int main(){

    int myNum = 1;     //Local variable
    std::cout << ::myNum <<std::endl;    

    printNum();

    return 0;
}
void printNum(){
    int myNum = 2; 
    std::cout << ::myNum <<std::endl;
}


//::myNum prints global version