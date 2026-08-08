#include <iostream>

void bakePizza ();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
void bakePizza(std::string topping1, std::string topping2, std::string topping3);

int main(){

    bakePizza("pepperoni", "jalapeno", "pineapples");

    return 0;
}
void bakePizza() {
    std::cout << "Here is your pizza!" <<std::endl;
}
void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza" <<std::endl;
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 <<std::endl;
}
void bakePizza(std::string topping1, std::string topping2, std::string topping3){
    std::cout << "Here is your pizza with " << topping1 << ", " << topping2 << " and " << topping3 <<std::endl;
}