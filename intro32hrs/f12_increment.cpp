#include <iostream>

int main()
{

    int value = 5;
    std::cout << "postfix increment 5++:" << value++ << std::endl;  //still 5
    std::cout << "after increment:" << value++ << std::endl;        //6

    value = 5;
    std::cout << "prefix increment ++5:" << ++value << std::endl;  //already 6
    std::cout << "after increment:" << value++ << std::endl;       //still 6

    value = 5;
    value += 1;
    value -=1;
    value *=2;
    value /=2;
    value %=2; //modulus

}