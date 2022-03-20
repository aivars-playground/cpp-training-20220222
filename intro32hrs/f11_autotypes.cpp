#include <iostream>

int main()
{

    auto var1{12};      // (int)12
    auto var2{12.F};    // float
    auto var3{13UL};    // unsigned long
    auto var4{13LL};    // long long
    auto var5{'A'};     // char 65
    auto var6{"āსบ้⠙"};  // char[15]

    std::cout << var6 << std::endl;
}