#include <iostream>

int main()
{

    int elephants_count;
    int lions_count{};
    int dogs_count{10};

    int non_elephant_count{lions_count + dogs_count};

    std::cout << "random garbage in elephants_count:" << elephants_count << std::endl;
    std::cout << "lions_count initialized to 0:" << lions_count << std::endl;
    std::cout << "dogs_count:" << dogs_count << std::endl;

    int narrowing_conversion_assignment = 2.9;
    std::cout << "narrowing_conversion_assignment:" << narrowing_conversion_assignment << std::endl;

    // functional initializer would narrow down to 2
    int narrowing_conversion_functional(2.9);
    std::cout << "narrowing_conversion_functional:" << narrowing_conversion_functional << std::endl;

    // //braced initalization would fail in my setup
    // int narrowing_conversion_braced {2.9}; //throws compile time warning (or error???? depends on compiler)
    // std::cout << "narrowing_conversion_braced:" << narrowing_conversion_braced << std::endl;

    unsigned int unsiged_negative_assignemnt = -1; // 4294967295
    unsigned int unsiged_negative_functional(-1);  // 4294967295
    // unsigned int unsiged_negative_braced{-1};         //compilation error

    signed int minus_one = -1;
    unsigned int reassignment_narrowing{minus_one}; // warning, got 4294967295
    std::cout << "reassignment_narrowing:" << reassignment_narrowing << std::endl;
}