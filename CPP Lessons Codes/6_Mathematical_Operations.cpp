#include <iostream>

int main(){
    int a, b;
    a = 6;
    b = 2;
    // x <op>= 1 will be same as x = x <op> 1
    int sum = a + b; // Summation
    int sub = a - b; // Subtraction
    int div = a / b; // Division
    int mul = a * b; // Multiplication
    int mod = a % b; // Modulus
    int inc = a++;   // or ++a to Increment by 1
    int dec = b--;   // or --a to Decrement by 1
    return 0;
}