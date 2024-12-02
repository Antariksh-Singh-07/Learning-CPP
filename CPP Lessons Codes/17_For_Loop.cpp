#include <iostream>

int main(){
    int year;
    std::cout << "Enter your Birth Year: ";
    std::cin >> year;

    for(int i = year; i >= 0 ; i--){ // for (statement 1; statement 2; statement 3)
        std::cout << i << "\n";
    } // runs the loop as long as the condition is met true.
    
    /* Statement 1 is executed (one time) before the execution of the code block.
    Statement 2 defines the condition for executing the code block.
    Statement 3 is executed (every time) after the code block has been executed. */
    
    std::cout << "You are Stupid!";

    return 0;
}