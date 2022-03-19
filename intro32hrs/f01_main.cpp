#include <iostream>

// testing if c++20 features are supported
/*
  see vscode folder 
     add code level "cppStandard": "c++20" to avoid IDE warnings
     add task to use correct compiler
*/
int main()
{
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}