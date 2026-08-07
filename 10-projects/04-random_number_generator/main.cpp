//pseudo-random = NOT truly random (but close)

#include <iostream>

int main(){

    srand(time(NULL));

    int num = rand();      //(rand() % б ) + 1;  random number between 1 to 6

    std::cout << num <<std::endl;

    return 0;
}