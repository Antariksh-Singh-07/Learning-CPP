#include <iostream>

// Functions are just reusabale block of code

// 2 ways to place a function in a code 
// Decleration of Fnc -> Main Fnc -> Declared Function
// OR
// Use Fnc -> Main Fnc

double weight_to_kgs(double lbs){ // <- perimeter (double lbs)
    double kgs = lbs / 2.20462;
    return kgs;
}

void showcase(); // Declaration

int main(){

    double lbs;
    std::cout << "Input your weight in lbs: ";
    std::cin >> lbs;

    double kgs = weight_to_kgs(lbs); // <- argument (lbs)

    std::cout << "Your weight in kgs is " << kgs << "\n";

    showcase();

    return 0;
}

void showcase(){ // Fnc after decleration
    std::cout << "This is a Fnc. showcase !" << std::endl;
}