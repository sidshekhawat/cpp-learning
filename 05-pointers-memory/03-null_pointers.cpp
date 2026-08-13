/*
Null value = A special value that means something has no value.
             When a pointer is holding a null value, 
             that pointer is not pointing at anything (null pointer )
             nullptr = keyword represents a null pointer literal
             nullptrs are helpful when determining if an address
             was successfully assigned to a pointer
*/

#include <iostream>

int main(){

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr){
        std::cout << "address was not assigned!" <<std::endl;
    }
    else{
        std::cout << "address was assigned!" <<std::endl;  
    }

    return 0;
}