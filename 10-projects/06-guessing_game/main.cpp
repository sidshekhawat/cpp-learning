#include <iostream>

int main() {

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "* * * * * * NUMBER GUESSING GAME * * * * * *" <<std::endl;

    do{
        std::cout << "Enter a guess between (1 - 100)" <<std::endl;
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too High!" <<std::endl;
        }
        else if(guess < num){
            std::cout << "Too Low!" <<std::endl; 
        }
        else{
            std::cout << "Correct! number of tries: " << tries <<std::endl; 
        }
    }while(guess != num);

    std::cout << "* * * * * * * * * * * * * * * * * * * * * * " <<std::endl;

    return 0;
}