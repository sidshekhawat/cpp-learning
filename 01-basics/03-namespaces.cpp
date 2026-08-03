/*  
namespace = provides a solution for preventing name conflicts in large projects. 
            Each entity needs a unique name.
            A namespace allows for identically named entities as long as the namespaces are different.

*/

#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main() {
    int x = 0;

    std::cout << "x : " << x << std::endl;  //will use local version of the entity
    std::cout << "x : " << first::x <<std::endl;   //will use the first namespace of x that is defined
    std::cout << "x : " << second::x <<std::endl;  //will use the second namespace of x 
}