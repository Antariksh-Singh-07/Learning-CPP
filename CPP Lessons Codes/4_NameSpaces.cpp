#include <iostream>
using std::cout; // I have to used cout rather than std:;cout (to my understanding std is a class/namespace in iostream)

/* Name Space ->
Provides Solution for Name Conflicts, allows multiple entities to co exists with the same name as long as there is a namespace defined for them (normally same named entities generate Conflicts) */

namespace nice1{
    int x = 69;
}

namespace nice2{
    int x = 21;
}

int main(){
    // using namespace nice1;
    // using namespace std; This will remove the requirement of using std:: everytime but increases the liklihood of name conflicts.
    // using std::string; This will cut the req of using only "std::string to string" only, nothing else would be distrubed.

    int x = 0;

    cout << x << nice1::x << nice2::x;

    return 0;
}