#include <iostream>

/*int main() {

    int x = 5;
    int y = 10;
    int sum = x + y;

    std::cout << "The value of x is " << x << std::endl;
    std::cout << "The value of y is " << y << std::endl;
    std::cout << "The sum of x and y is " << sum << std::endl;
    
    return 0;
}*/

int main() {

    //integer variable (whole number)   
    int age = 20;
    int year = 2026;
    int hours = 7.5;  // This will cause a warning because 7.5 is a double, but it will be truncated to 7

    //double variable (decimal number)
    double price = 19.99;
    double pi = 3.14159;
    double temperature = 36.6;

    //single character variable
    char grade = 'A';
    char initial = 'S';

    //boolean variable (true or false)
    bool isStudent = true;
    bool forSale = false;

    //strings variable (object that represnt the sequence of text)
    std::string name = "John Doe";
    std::string city = "New York";


    //Printing the values of the variables
    std::cout << "Age: " << age << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Hours: " << hours << std::endl; 

    std::cout << "Price: " << price << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;

    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Initial: " << initial << std::endl;

    std::cout << "Is Student: " << isStudent << std::endl;
    std::cout << "For Sale: " << forSale << std::endl;

    std::cout << "Name: " << name << std::endl;
    std::cout << "City: " << city << std::endl;

    return 0;
}