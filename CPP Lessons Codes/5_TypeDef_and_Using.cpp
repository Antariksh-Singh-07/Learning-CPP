#include <iostream>
// typedef is a way to make a alias for a Data type [typedef <entity> <alias>]
// we also may use Using <alias> = <entity> to generate a alias [works better w/ Templates]

typedef std::string text_t; // we use _t to show that its a user defined name
using float_t = double;

int main(){

    text_t no = "nuh uh";
    float_t yes = 6.9;

    std::cout << no << " " << yes;
    return 0;
}