#include <iostream>

int main()
{

    bool red_light{true};
    bool green_light{false};

    if(red_light == true) {
        std::cout << "STOP" << std::endl;
    } else {
        std::cout << "GO" << std::endl;
    }


    if(green_light) {
        std::cout << "GREEN: ON" << std::endl;
    } else {
        std::cout << "RED: ON" << std::endl;
    }

    std::cout << "size of boolean: " << sizeof(bool) << std::endl; //takes whole byte

    std::cout << "red_light: " << red_light << std::endl; // 1
    std::cout << std::boolalpha;                                        //enable printing boolean
    std::cout << "red_light: " << red_light << std::endl; // true

}