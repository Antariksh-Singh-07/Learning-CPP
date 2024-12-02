#include <iostream>

int Random_Num(int N)
{
    srand(time(NULL));
    int output = rand() % N + 1;
    return output;
}

void Throw_Dice()
{
    std::cout << "You didn't threw any dice !\n";
}
void Throw_Dice(int S_Dice)
{
    int output = Random_Num(S_Dice);
    std::cout << "You rolled a " << output;
}
void Throw_Dice(int S_Dice1, int S_Dice2)
{
    int ot1 = Random_Num(S_Dice1);
    int ot2 = Random_Num(S_Dice2);
    std::cout << "You rolled a total of " << ot1 + ot2;
}

void How_Many_Sides(int num)
{
    switch (num)
    {
    case 1:
        int S_Dice;
        std::cout << "How many sides in your dice ?: ";
        std::cin >> S_Dice;
        if (S_Dice < 0)
        {
            std::cout << "Input a valid number !\n";
        }
        else
        {
            Throw_Dice(S_Dice);
        }
        break;
    case 2:
        int S_Dice1;
        int S_Dice2;
        std::cout << "How many sides in your first dice ?: ";
        std::cin >> S_Dice1;
        std::cout << "How many sides in your second dice ?: ";
        std::cin >> S_Dice2;
        if (S_Dice1 < 1 || S_Dice2 < 1)
        {
            std::cout << "Input a valid number !\n";
        }
        else
        {
            Throw_Dice(S_Dice1, S_Dice2);
        }
        break;
    default:
        std::cout << "Input a valid number !\n";
        break;
    }
}

int main()
{
    int N_Dice;
    std::cout << "Input Number of Dice to be thrown (0/1/2): ";
    std::cin >> N_Dice;

    switch (N_Dice)
    {
    case 0:
        Throw_Dice();
        break;
    default:
        How_Many_Sides(N_Dice);
        break;
    }

    return 0;
}