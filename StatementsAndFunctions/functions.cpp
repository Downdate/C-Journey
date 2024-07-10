#include <iostream>

int addNumbers (int firstNumber , int secondNumber){
    int sum = firstNumber + secondNumber;
    return sum;
}

int main(int argc, char const *argv[])
{
    int sum = addNumbers(10 ,20);
    std::cout << "sum of two numbers : " << sum << std::endl;
    return 0;
}
