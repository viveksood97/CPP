#include <iostream>
#include <string>

std::string addStrings(std::string num1, std::string num2) {
        float number1, number2 = 0;
        for(char i: num1) number1 += i;
        for(char i: num2) number2 += i;
        std::cout << number1 + number2<< std::endl;
        return std::to_string(number1 + number2);
        
    }

int main() {
    std::cout << addStrings("11", "123")  << std::endl;
    return 0;
}