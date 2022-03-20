#include <iostream>

int main()
{

    int elephants_count;
    int lions_count{};
    int dogs_count{10};

    std::cout << "random garbage in elephants_count:" << elephants_count << std::endl;
    std::cout << "lions_count initialized to 0:" << lions_count << std::endl;
    std::cout << "dogs_count:" << dogs_count << std::endl;

    int narrowing_conversion {2.9}; //throws compile time warning (or error???? depends on compiler)
    std::cout << "narrowing_conversion:" << narrowing_conversion << std::endl;
}