#include <iostream>

int main()
{
    //Compile time error
    std::cout << "Hello world" << std::endl


    //Runtime error
    int value = 7/0;
    std::cout << "Value: " << value << std::endl;


    return 0;
}
