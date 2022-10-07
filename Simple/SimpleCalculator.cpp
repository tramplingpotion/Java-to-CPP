#include <iostream>

int main(int argc, char const *argv[])
{
    int number1;
    double number2;
    char operator_;
    std::cout<<"Enter First Number: "<<std::endl;
    std::cin>>number1;
    std::cout<<"Enter Second Number: "<<std::endl;
    std::cin>>number2;
    std::cout<<"Enter Method of Operation: "<<std::endl;
    std::cin>>operator_;

    switch (operator_)
    {
    case '+':
        std::cout<<"Result: "<<number1+number2<<std::endl;
        break;
    case '-':
        std::cout<<"Result: "<<number1-number2<<std::endl;
        break;
    case '*':
        std::cout<<"Result: "<<number1*number2<<std::endl;
        break;
    case '/':
        std::cout<<"Result: "<<number1/number2<<std::endl;
        break;
    
    default:
        std::cout<<"Operator not exist!"<<std::endl;
        break;
    }
    


    return 0;
}
