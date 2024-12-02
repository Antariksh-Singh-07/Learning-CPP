#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue; // skips the specific iteration of the loop
        }
        if(i == 17){
            break; // breaks the loop and skips ahead of the loop
        }
        std::cout << i << '\n';
    }

    return 0;
}