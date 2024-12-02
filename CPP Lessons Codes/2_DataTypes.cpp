#include <iostream>

int main(){

    // Integers (whole numbers)
    int a;           // Declaration
    a = 23;          // Assignment
    int b = 46;      // Both together
    int sum = a + b; // Summation

    // Double (Decimal Values 8 byte/ More precision)
    double Nice = 1.0/3.0;

    // Float (Decimal Values 4 byte/ Less precision)
    float nice = 1.0/3.0;

    // Single Characters
    char Character = 'A';

    // Boolean (true or false | only two states)
    bool Male = true;

    // Strings
    std::string name = "Antariksh Singh born in 2007";

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << sum << "\n";
    std::cout << Nice << "\n";
    std::cout << nice << "\n";
    std::cout << Character << "\n";
    std::cout << Male << "\n";
    std::cout << name;

    return 0;
}