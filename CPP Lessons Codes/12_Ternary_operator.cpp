#include <iostream>

// condition ? (if True) expression : (if False) expression; [? is the ternary operator]

int main(){
    int p;
    std::cout << "Enter your percentage: ";
    std::cin >> p;

    p >= 33 ? std::cout << "You Pass" : std::cout << "You Fail";

    return 0;
}