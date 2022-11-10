#include <iostream>
#include <string>



int hammingWeight(uint32_t n) {
        std::string s = std::to_string(n);
        int result = 0;
        while(n)
        {
            result++;
            n &=n-1;
        }
        return result;
    }

int main() {
    std::cout << hammingWeight(00000000000000000000000000001011);
    return 0;
}