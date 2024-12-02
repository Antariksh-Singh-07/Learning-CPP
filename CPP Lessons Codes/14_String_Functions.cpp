#include <iostream>

int main(){

    std::string inp;
    std::cout << "Enter any String: ";
    std::getline(std::cin, inp);

    std::cout << inp.length() << "\n"; // Returns the lenght in int

    std::cout << inp.empty() << "\n"; // Returns true if empty

    inp.append("@gmail.com"); // Appends a string into another
    std::cout << inp << "\n";

    std::cout << inp.at(0) << "\n"; // Retruns the value at the given index
    std::cout << inp[0] << "\n"; // Can use this instead of <var>.at(<val>)

    inp.insert(0, "Sam - "); // Inserts the string at the given index
    std::cout << inp << "\n";

    std::cout << inp.find(" ") << "\n"; // Returns the index of the first occurance of the sub string given

    inp.erase(0,6); // Erases the values from the range given [x,y)
    std::cout << inp << "\n";

    inp.clear(); // Clears the strig into a empty string
    std::cout << inp << "\n";

    return 0;
}