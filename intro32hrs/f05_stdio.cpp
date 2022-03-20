#include <iostream>

int main()
{
    std::cout << "this is OUT level" << std::endl;
    std::clog << "this is LOG level" << std::endl;
    std::cerr << "this is ERR level" << std::endl;

    //enter something like 2 3 4 (with spaces) and it will populate age, nr1 and nr2 below....
    int age;
    std::cout << "input age: ";
    std::cin >> age;
    std::cout << "received age:" << age << std::endl;

    int day;
    std::string month;
    int year;
    std::cout << "input birth date dd Month YYYY (separated by spaces): ";
    std::cin >> day >> month >> year;
    std::cout << "received: day=" << day << " , month=" << month <<  " , year=" << year << std::endl;

    //note comment above
    //see https://stackoverflow.com/questions/5739937/using-getlinecin-s-after-cin
    std::cin.ignore(256, '\n');
    std::string full_name;
    std::cout << "read data with spaces: input full name (1 to n): ";
    std::getline(std::cin, full_name);
    std::cout << "received name: " << full_name << std::endl;    
}