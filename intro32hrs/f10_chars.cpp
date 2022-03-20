#include <iostream>

int main()
{

    char character_a {'a'};
    char character_b {'b'};

    std::cout << character_a << std::endl;
    std::cout << character_b << std::endl;

    char A{65};
    std::cout << "A:" << A << std::endl;
    std::cout << "A -> int:" << static_cast<int>(A) << std::endl;


}