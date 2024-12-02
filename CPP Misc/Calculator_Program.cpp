#include <iostream>
#include <cmath>
// #include <chrono>
using namespace std;

int main(){
    // auto start = chrono::high_resolution_clock::now();
    char loop;
    cout << "*-----*-----*-----*-----*-Calculator-*-----*-----*-----*-----*\n";
    
    do{
        double a,b;
        char o;
        cout << "\nEnter the operator to use [+, -, *, /, ^]: ";
        cin >> o;
        cout << "Enter num 1: ";
        cin >> a;
        cout << "Enter num 2: ";
        cin >> b;


        switch(o){
            case '+':
                cout << a << " + " << b << " = " << a+b << "\n";
                break;
            case '-':
                cout << a << " - " << b << " = " << a-b << "\n";
                break;
            case '*':
                cout << a << " * " << b << " = " << a*b << "\n";
                break;
            case '/':
                cout << a << " / " << b << " = " << a/b << "\n";
                break;
            case '^':
                cout << a << " ^ " << b << " = " << pow(a,b) << "\n";
                break;
            default:
                cout << "Invalid equation entered!" << "\n";
                break;
        }

        cout << "\nDo you want to Continue? [y/n]: ";
        cin >> loop;
    }while(tolower(loop) == 'y');

    cout << "\n*-----*-----*-----*-----*-Closing-*-----*-----*-----*-----*";
    
    // auto end = chrono::high_resolution_clock::now();
    // auto exec_time = chrono::duration_cast<chrono::milliseconds>(end-start);

    // cout << exec_time.count();

    return 0;
}