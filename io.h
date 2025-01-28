#include <iostream>

int io_test() {
    std::cout << "input an number\n";
    int input;
    std::cin >> input;
    std::cout << input << std::endl;//if no std::endl => <input>%
    return 0;
}

