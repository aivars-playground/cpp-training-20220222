#include <iostream>

int main()
{
    std::cout << "OUT" << std::endl;
    std::clog << "LOG" << std::endl;
    std::cerr << "ERR" << std::endl;

    int age;
    std::cout << "input age:";
    std::cin >> age;
    std::cout << "received age:" << age << std::endl;
}