#include <iostream>
using namespace std;

int main(){
    
    double C;
    double F;
    double K;
    char choice_in;
    char choice_out;

    cout << "*-----*-----*-----*-----*-Temperature Converter-*-----*-----*-----*-----*\n";
    char loop;
    do{
        cout << "From [C/F/K]: ";
        cin >> choice_in;
        cout << "To [C/F/K]: ";
        cin >> choice_out;

        switch (toupper(choice_in))
        {
        case 'C':
            cout << "Enter the temperature [Celcius]: ";
            cin >> C;
            if (toupper(choice_out) == 'F')
            {
                F = C * 9 / 5 + 32;
                cout << C << " Celcius in Fahrenheit = " << F;
            }
            else if (toupper(choice_out) == 'K')
            {
                K = C + 273.15;
                cout << C << " Celcius in Kelvin = " << K;
            }
            else
            {
                cout << "Second Input Invalidated\n";
            }
            break;
        case 'F':
            cout << "Enter the temperature [Fahrenheit]: ";
            cin >> F;
            if (toupper(choice_out) == 'C')
            {
                C = (F - 32) * 5 / 9;
                cout << F << " Fahrenheit in Celcius = " << C;
            }
            else if (toupper(choice_out) == 'K')
            {
                K = (F - 32) * 5 / 9 + 273.15;
                cout << F << " Fahrenheit in Kelvin = " << K;
            }
            else
            {
                cout << "Second Input Invalidated\n";
            }
            break;
        case 'K':
            cout << "Enter the temperature [Kelvin]: ";
            cin >> K;
            if (toupper(choice_out) == 'C')
            {
                C = K - 273.15;
                cout << K << " Kelvin in Celcius = " << C;
            }
            else if (toupper(choice_out) == 'F')
            {
                F = (K - 273.15) * 9 / 5 + 32;
                cout << K << " Kelvin in Fahrenheit = " << F;
            }
            else
            {
                cout << "Second Input Invalidated\n";
            }
            break;
        default:
            cout << "First Input Invalidated!\n";
            break;
        }
        cout << "\nDo you want to continue? [y/n]: ";
        cin >> loop;
    }while(tolower(loop)=='y');
    cout << "\n*-----*-----*-----*-----*-----*-Closing-*-----*-----*-----*-----*-----*\n";
    return 0;
}