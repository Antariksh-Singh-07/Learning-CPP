#include <iostream>

int main(){
    
    /* '&&' {and} both of the conditions should be true
    '||' {or} one of the two conditions should be true
    '!' {not} reverses the logical state of its operand */

    double pcm;
    bool pass;
    double cse;

    std::cout << "Enter your % in PCM: ";
    std::cin >> pcm;

    std::cout << "Enter your % in CS and Eng: "; 
    std::cin >> cse;

    if(pcm > 90 && cse > 90){
        std::cout << "You got more than 90%" << "\n";
    }
    else{
        std::cout << "You got less than 90%" << "\n";
    }

    if (pcm < 33 || cse < 33){
        std::cout << "You Failed! Congrats :D" << "\n";
        pass = false;
    }
    else{
        std::cout << "Congrats! " << "\n";
        pass = true;
    }

    if(!pass){
        std::cout << "Utter Dissapointment";
    }

    return 0;
}