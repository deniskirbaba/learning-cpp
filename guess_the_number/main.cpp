#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max)
{
    double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

bool playGame(int guesses, int number)
{
    for (int count = 1; count <= guesses; ++count)
    {
        std::cout << "Guess #" << count << ": ";
        int guess;
        while (true)
        {
            std::cin>>guess;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(32767,'\n');
                std::cout<<"You entered incorrect character, enter another, please: ";
            }

            else
            {
                if (guess>100||guess<1)
                {
                    std::cout<<"You entered incorrect number, enter another, please: ";
                    std::cin.ignore(32767,'\n');
                }

                else
                {
                    std::cin.ignore(32767,'\n');
                    break;
                }
            }
        }

        if (guess > number)
            std::cout << "Your guess is too high.\n";
        else if (guess < number)
            std::cout << "Your guess is too low.\n";
        else
            return true;
    }

    return false;
}

bool playAgain()
{
    char ch;
    do
    {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> ch;
        std::cin.ignore(32767,'\n');
    }
    while (ch != 'y' && ch != 'n');

    return (ch == 'y');
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    rand();

    int guesses = 7;

    do
    {
        int number = getRandomNumber(1, 100);

        std::cout << "Let's play a game.  I'm thinking of a number.  You have " << guesses << " tries to guess what it is.\n";

        bool won = playGame(guesses, number);
        if (won)
            std::cout << "Correct!  You win!\n";
        else
            std::cout << "Sorry, you lose.  The correct number was " << number << "\n";

    }
    while (playAgain());

    std::cout << "Thank you for playing.\n";
    return 0;
}
