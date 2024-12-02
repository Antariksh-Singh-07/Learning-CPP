#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 4;
    int b = 6;
    int c;

    // c = max(a, b); // [OT]: 6
    // c = min(a, b); // [OT]: 4
    // c = pow(a, b); // [OT]: 4096
    // c = sqrt(a); // [OT]: 2
    c = abs(-69); // [OT]: 69
    // c = round(69.49); // [OT]: 69
    // c = round(68.50); // [OT]: 69
    // c = ceil(3.141592653589793238462643383279); // [OT]: 4
    // c = floor(3.141592653589793238462643383279); // [OT]: 3

    cout << c;
    return 0;
}