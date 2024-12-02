#include <iostream>

/* A Switch case is used to avoid large if else block, although switch cases
can only evaluate int or char for their condition, but they're significantly 
faster at large scale as the cases are processed simultaneously. */

int main(){
    
    char Sname;
    std::cout << "Enter Ukulele String: ";
    std::cin >> Sname;

    switch(Sname){
        case 'A':
            std::cout << "That's the bottom most string!";
            break;
        case 'E':
            std::cout << "That's the second string from the bottom!";
            break;
        case 'C':
            std::cout << "That's the second string from the top!";
            break;
        case 'G':
            std::cout << "That's the upper most string!";
            break;
        default:
            std::cout << "Invalid String name, doesn't exist on the Ukulele!";
            break;
    }
    return 0;
}