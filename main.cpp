#include <iostream>
#include "io.h"
using std::cin;
using std::endl;
// initialize variables
int a;
int b = 1;//Copy initialization
int c(2);//Direct initialization, when type is more complex it tends to be more efficient than copy initialization.

//List initialization, uniform initialization or brace initialization
//int d{3}; error
//int e{};// = 0 error
int f = {4};// copy list initialization
//int g = 4.5;// => 4 error
//int h {4.5}; // compile failed
//float i{};// = 0 error
int j, k(5);//j = 0
//int m, n{6};// m = 0 error

void initTest() {
    cout << "Test" << endl;
    cout << "test";
    cout << "test";
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    //std::cout << d << std::endl;
    //std::cout << e << std::endl;
    std::cout << f << std::endl;
    //std::cout << g << std::endl;
    //std::cout << i << std::endl;
    //std::cout << j << std::endl;
    //std::cout << k << std::endl;
    //std::cout << m << " " << n << std::endl;
}

int main() {
    std::cout << "Hello World!" << std::endl;
    initTest();
//    io_test();
    return 0;
}
