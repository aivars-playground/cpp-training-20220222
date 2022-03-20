#include <iostream>
#include <iomanip>  //for precision

int main()
{

    float float_number = {1.23456789F};
    double double_number = {1.23456789};
    long double longdouble = {1.23456789L};


    std::cout << "float_number:" << float_number << " double_number:" << double_number << " longdouble:" << longdouble << std::endl;  

    std::cout << "float size:" << sizeof(float) << std::endl;               //4
    std::cout << "double size:" << sizeof(double) << std::endl;             //8
    std::cout << "long double size:" << sizeof(long double ) << std::endl;  //16 in my case
    
    float float_6 = {123456.F};
    std::cout << "float_6:" << float_6 << std::endl;   //123456
    float float_7 = {1234567.F};
    std::cout << "float_7:" << float_7 << std::endl;   //1.23457e+06
    float float_8 = {12345678.F};
    std::cout << "float_8:" << float_8 << std::endl;   //1.23457e+07
    float float_9 = {123456789.F};
    std::cout << "float_9:" << float_9 << std::endl;   //1.23457e+07

    float float_8_alt = {12345678};
    std::cout << "float_8_alt:" << float_8_alt << std::endl;   //1.23457e+07


    //error - narrowing conversion from int to float
    //float float_9_alt = {123456789};
    //std::cout << "float_9_alt:" << float_9_alt << std::endl;

    double double_9 = {123456789};
    std::cout << "double_9:" << double_9 << std::endl;

    double five{5.0};
    double minus_five{-5.0};
    double zero = 0;
    double zero_minus = -0;
    double zero_notdefined{};

    std::cout << "5 / 0 = infinity:" << (five / zero) << std::endl; //inf
    std::cout << "0 / 0 = not a number:" << (zero / zero) << std::endl; //-nan
    std::cout << "-5 / 0 = minus infinity:" << (minus_five / zero) << std::endl; //-inf

    std::cout << "5 / 0 = infinity:" << (five / zero_notdefined) << std::endl; //inf
    std::cout << "0 / 0 = not a number:" << (zero_notdefined / zero_notdefined) << std::endl; //-nan
    std::cout << "-5 / 0 = minus infinity:" << (minus_five / zero_notdefined) << std::endl; //-inf

    std::cout << "5 / 0 = infinity:" << (five / zero_minus) << std::endl; //inf
    std::cout << "0 / 0 = not a number:" << (zero_minus / zero_minus) << std::endl; //-nan
    std::cout << "-5 / 0 = minus infinity:" << (minus_five / zero_minus) << std::endl; //-inf


    
    //precision in console output

    float float_9_symbols = {123456789.F};
    double double_16_symbols = {1234567890123456};

    std::cout << "float_9_symbols:" << float_9_symbols << std::endl;   //1.23457e+07
    std::cout << "double_16_symbols:" << double_16_symbols << std::endl;   //1.23457e+15

    std::cout << std::setprecision(20);

    std::cout << "float_9_symbols:" << float_9_symbols << std::endl;   //123456792  <--garbage at the end "92"
    std::cout << "double_16_symbols:" << double_16_symbols << std::endl;   //1234567890123456


    //scientific notation
    double scientiffic {1.23457e+08};
    std::cout << "scientiffic:" << scientiffic << std::endl;   //123457000

}