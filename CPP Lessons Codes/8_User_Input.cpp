#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int age;
    string place;

    /* using cin >> std::ws -> tells the compiler to ignore buffer and also 
    to discard all the whitespaces before the actual content of string or 
    character array. */

    cout << "Name: ";
    getline(cin >> ws, name);

    cout << "Age: ";
    cin >> age;

    cout << "Place: ";
    getline(cin >> ws, place);

    cout << "Name: " << name << "\nAge:  " << age << "\nPlace:  " << place;
    return 0;
}