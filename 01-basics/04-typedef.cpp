/*  
typedef= reserved keyword used to create an additional name(alias) for another data type.
         New identifier for an existing type.
         Helps with readability and reduces typos.
         Use when there is a clear benefit
         Replaced with 'using' (work better w/ templates).
*/

#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, in>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    text_t name = "Sid";
    number_t age = 20;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0;
}