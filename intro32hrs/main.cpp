#include <iostream>

// testing c++20 feature
int main()
{
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}