#include <iostream>


int main() {
    std::string greeting = "Hello World!";
    std::string hello(greeting.size(), ' ');
    std::cout << hello;
    int a = 1;
    int b = 1;
    a == b + 1 ? std::cout << "Hello" : std::cout << "Not HEllo";
    std::cout << ++a;
    return 0;
}