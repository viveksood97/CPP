#include <iostream>

bool isPalindrome(int x) {
    long input = x;
    long rev = 0;
    while(input > 0) {
        long digit = input%10;
        rev = rev *10 + digit;
        input = input/10;
    }
    return rev == x;
}

int main() {
    std::cout << isPalindrome(121);
    return 0;
}