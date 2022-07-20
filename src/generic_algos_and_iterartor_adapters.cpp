#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";
    std::string::iterator begin = str.begin();
    std::string::iterator end = str.end();

    std::string::iterator out = str.begin() + 5;

    while(begin != end) {
        *out++ = *begin++;
    }
    return 0;
}