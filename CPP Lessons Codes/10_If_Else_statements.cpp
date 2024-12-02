#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    { // Checks if this condition is true, if true executes the following block.
        cout << "Eligible for a License!";
    }
    else if (age < 0)
    { // If the previous case wasn't True, this condition is checked. (else if can be more than 1)
        cout << "You aren't even born yet!";
    }
    else
    { // If no if and else if statements were given a true condition, else is executed.
        cout << "You're not eligible for a License!";
    }

    return 0;
}