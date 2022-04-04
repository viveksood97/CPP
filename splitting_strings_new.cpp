#include <iostream>
#include <vector>
#include <algorithm>
bool isSpace(const char& c) {
    return isspace(c);
}

std::vector<std::string> split(const std::string& str) {
    typedef std::string::const_iterator iter;
    std::vector<std::string> ret;
    iter i = str.begin();
    while(i != str.end()) {
        i = std::find_if_not(i, str.end(), isSpace);

        iter j = std::find_if(i, str.end(), isSpace);

        if(i != str.end()) {
            ret.push_back(std::string(i,j));
        }
        i = j;
    }
    return ret;
}

int main() {
    std::vector<std::string> test = split("Hello World!");
    for(int i = 0; i!=test.size(); ++i) {
        std::cout << test[i] << std::endl;
    }
    return 0;
}