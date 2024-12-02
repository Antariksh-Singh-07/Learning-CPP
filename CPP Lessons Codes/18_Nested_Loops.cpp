#include <iostream>

// LOOP IN DA LOOP

int main(){
    int n;
    std::cout << "how many rows: ";
    std::cin >> n;

    char method;
    std::cout << "Normal or Reversed [n/r]: ";
    std::cin >> method;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= (method == 'n' ? i : n+1-i); j++){
            std::cout << "*" << " ";
        }
        std::cout << '\n';
    }
    return 0;
}