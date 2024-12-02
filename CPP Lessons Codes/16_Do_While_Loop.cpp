#include <iostream>

int main(){
    
    int x;
    do{ // executes this block of code.
        std::cout << "Enter 69: ";
        std::cin >> x;
    }while(x!=69); // if this condition is true, runs this block infinitely while it's true.

    std::cout << "Nice ;)";

    return 0;
}