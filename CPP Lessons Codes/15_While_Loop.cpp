#include <iostream>

int main(){
    int x;
    std::cout << "Enter a no.: ";
    std::cin >> x;

    while(x!=69){ // Runs this block of code infinitely while the condition is true
        x < 69 ? x++ : x--;
        std::cout << x << "\n";
        if(x==69){ std::cout << "Nice ;)"; }
    }

    return 0;
}