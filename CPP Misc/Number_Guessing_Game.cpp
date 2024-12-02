#include <iostream>
using namespace std;

int main()
{

    int N;
    int guess;
    int tries = 0;
    int randnum;

    cout << "Input N, max value of guess range -> (1-N): ";
    cin >> N;
    srand(time(0));
    randnum = rand() % N + 1;

    do
    {
        cout << "Guess: ";
        cin >> guess;
        tries++;

        if (guess < 1 || guess > N)
        {
            cout << "Out of Range !\n";
            tries--;
        }
        else if (guess > randnum)
        {
            cout << "High Guess !\n";
        }
        else if (guess < randnum)
        {
            cout << "Low Guess !\n";
        }
        else
        {
            cout << "You're Correct !\n";
        }
    } while (guess != randnum);

    cout << "Congratulauralasan ! The correct number was " << randnum << " & it took you " << tries << " tries to guess";

    return 0;
}