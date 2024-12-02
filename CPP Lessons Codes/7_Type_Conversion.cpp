#include <iostream>

int main(){
    // Implicit = Automatic Conversion
    // Explicit = Manual Conversion [preceeding a value with a data type, (<data type>)]

    int x = 210.69;
    std::cout << x << "\n"; // Implicit

    double y = 69.21;
    std::cout << (int)y << "\n"; // Explicit

    return 0;
}