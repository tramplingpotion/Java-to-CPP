#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char const *argv[])
{
    const short minVal = 1;
    const short maxVal = 10;
    int number;
    int winningNum;

    srand(time(0));

    std::cout<<"Welcome to CPP Gambling!"<<std::endl;
    std::cout<<"Choose between 1 to 10: "<<std::endl;
    std::cin>>number;

    winningNum = rand()%(maxVal-minVal+1)+minVal;

    if(winningNum==number){
        std::cout<<"You Win!!!"<<std::endl;
    }else{
        std::cout<<"You Lose..."<<std::endl;
        std::cout<<"The Winning Number is "<<winningNum<<std::endl;

    }

    return 0;
}
