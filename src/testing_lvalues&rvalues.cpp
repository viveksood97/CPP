#include <iostream>

int& getValue() {
    static int value = 10;
    return value;
}

void printName(std::string& name) {
    std::cout << "[lvalue]" << name << std::endl;
}

void printName(std::string&& name) {
    std::cout << "[rvalue]" << name << std::endl;
}

int main() {
    getValue() = 5;
    std::string firstName = "Vivek";
    std::string lastName = "Sood";
    printName("Vivek Sood");
    int a = 5;
    std::cout << &a <<std::endl;
    std::cout << *&a <<std::endl;
    printName(firstName);
    printName(firstName + lastName);
    return 0;
}