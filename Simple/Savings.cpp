#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double saving;
    std::string prodName;
    double price;

    std::cout<<"What is your monthly savings?"<<std::endl;
    std::cin>>saving;
    std::cout<<"What do you want to buy?"<<std::endl;
    std::cin>>prodName;
    std::cout<<"What is the price?"<<std::endl;
    std::cin>>price;

    double waitTime = price/saving;

    std::cout<<"You need to save for "<<std::round(waitTime)<<" months to buy "<<prodName;
    
    return 0;
}
