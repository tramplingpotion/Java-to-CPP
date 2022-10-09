#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const short minVal = 1;
    const short maxVal = 10;
    int number;
    int winningNum;
    int winningTime = 0;
    double playTime = 0;

    char stopGameLoop = 'n';
    char softwareLoop = 'y';

    srand(time(0));
    std::cout << "Welcome to CPP Gambling!" << std::endl;
    while (softwareLoop == 'y')
    {
        while (stopGameLoop == 'n')
        {
            std::cout << std::endl;

            std::cout << "Choose between 1 to 10: ";
            std::cin >> number;
            winningNum = rand() % (maxVal - minVal + 1) + minVal;

            if (winningNum == number)
            {
                std::cout << "You Win!!!" << std::endl;
                winningTime++;
            }
            else
            {
                std::cout << "You Lose..." << std::endl;
                std::cout << "The Winning Number is " << winningNum << std::endl;
            }

            std::cout << "Look at performance(y/n): ";
            std::cin >> stopGameLoop;
            playTime++;
        }
        std::cout << std::endl;
        std::cout << "Round Played: " << playTime << std::endl;
        std::cout << "Victory Round: " << winningTime << std::endl;
        std::cout << "Winning Percentage: " << winningTime / playTime * 100 << "%" << std::endl;
        std::cout << std::endl;
        std::cout << "Play again(y/n): ";
        std::cin >> softwareLoop;

        if (softwareLoop == 'y')
        {
            stopGameLoop = 'n';
        }
    }

    return 0;
}
