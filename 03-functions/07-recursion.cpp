/*
recursion = a programming technique where a function invokes itself from within
            break a complex concept into a repeatable single steps

(iterative vs recursive)

advantages = less code and is cleaner
             useful for sorting and searching algorithms

disadvantages = uses more memory
                slower 
*/

#include <iostream> 

void walk(int steps);
int factorial(int num);

int main(){

    walk(10);

    return 0;  
}
void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!" <<std::endl;
        walk(steps - 1);
    }
}

int main(){

    std::cout << factorial(10);

    return 0;  
}
/*int factorial(int num){
    int result = 1;
    for (int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}*/

//recursively 

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
} 
