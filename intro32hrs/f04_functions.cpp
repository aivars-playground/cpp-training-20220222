#include <iostream>

// function has to be defined before it can be used
int addNumbers(int left, int right)
{
    int sum = left + right;
    return sum;
}

// or provide Function declaration on top, and definition below
int multiplyNumbers(int left, int right);

int main()
{
    int first{12}; // the same as '=' assignment???
    int second = 9;

    int sum = addNumbers(first, second);
    std::cout << "the sum of two numbers is:" << sum << std::endl;

    std::cout << "the product of two numbers is:" << multiplyNumbers(first, second) << std::endl;

    return 0;
}

int multiplyNumbers(int left, int right)
{
    int sum = left * right;
    return sum;
}
