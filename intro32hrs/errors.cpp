#include <iostream>

int main()
{

    //compile time error
    std::cout << "HI" << std::endl;  //remove ";" and compilation will fail 

    //compile time warning: app compiles, but displays "warning: division by zero [-Wdiv-by-zero]"
    int value = 7/0; //causes runtime error, app stops here with "Floating point exception"
    std::cout << "value:" << value << std::endl;

    return 0;
}