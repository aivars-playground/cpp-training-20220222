#include <iostream>

int main()
{

    int fifteen_decimal = 15;
    int fifteen_octal = 017;
    int fifteen_hex = 0x0f;
    int fifteen_binary = 0b00001111;


    std::cout << "fifteen" << std::endl;
    std::cout << fifteen_decimal << std::endl;
    std::cout << fifteen_octal << std::endl;
    std::cout << fifteen_hex << std::endl;
    std::cout << fifteen_binary << std::endl;

    //modifiers

    signed int max_signed = 2147483647;
    std::cout << "max_signed:" << max_signed << " max_signed+1:" << (max_signed+1) << std::endl;

    unsigned int max_unsigned = 4294967295;
    std::cout << "max_unsigned:" << max_unsigned << " max_unsigned+1:" << (max_unsigned+1) << std::endl;

    unsigned int minus_value = -5; //4294967291
    std::cout << "minus_value:" << minus_value << std::endl;


    //sizes

    int int_val = 15;
    std::cout << "int_val size:" << sizeof(int_val) << std::endl;

    long long_val = 15; //4 bytes on 32 bit system, 8 bytes on 64 bit system
    std::cout << "long_val size:" << sizeof(long_val) << std::endl;

    long long longlong_val = 15;
    std::cout << "longlong_val size:" << sizeof(longlong_val) << std::endl;

    std::cout << "short int size:" << sizeof(short int) << std::endl;
    std::cout << "unsigned short int size:" << sizeof(unsigned short int) << std::endl;
    std::cout << "long size:" << sizeof(long) << std::endl;    // 4 or 8
    std::cout << "long long size:" << sizeof(long long) << std::endl;

    std::cout << "string size:" << sizeof(std::string) << std::endl;

}