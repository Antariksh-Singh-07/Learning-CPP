#include <iostream>

int main(){

    srand(time(NULL)); //srand takes a seed and gives the random function a new starting point
    // seed is taken to be time(NULL) or (0) to get new starting point everytime
    // Pseudo Random number is a set of pre generated numbers that seem random but actually are not
    // if srand is not written, rand may output repeated numbers

    int N = 69;
    int num1 = rand(); // 0 - 32767 range (32767 is also known as the RAND_MAX)
    int num2 = rand() % N; // 0-(N-1) range
    int num3 = (rand() % N) + 1; // 1-N range

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";

    return 0;
}