#include <iostream>

int main(int argc, char const *argv[])
{
    double meal;
    double transport;
    double saving;

    std::cout<<"Daily Meals Expenses: RM";
    std::cin>>meal;
    std::cout<<"Daily Transportation Expenses: RM";
    std::cin>>transport;
    std::cout<<"Daily Savings: RM";
    std::cin>>saving;

    std::cout<<"Your Monthly Expenses is RM"<<(meal+transport+saving)*30;

    return 0;
}
