#include <iostream>
#include <vector>
#include <string>

//Kinda Useless
std::vector<std::string> split(const std::string& s) {
    std::vector<std::string> ret;
    typedef std::string::size_type string_size;
    string_size i = 0;

    while(i != s.size()) {
        if(i != s.size() && isspace(s[i])){
            ++i;
        }
        string_size j = i;
        if(j != s.size() && !isspace(s[j])) {
            ++j;
            if(i != j) {
                ret.push_back(s.substr(i, j-i));
                i = j;
            }
        }
    }
    return ret;
}


int main() {
    std::string test;
    while(std::getline(std::cin, test)) {
        std::vector<std::string> output = split(test);
        for(std::vector<std::string>::const_iterator i = output.begin(); i!= output.end(); ++i) {
            std::cout << *i << std::endl;
        }
    }

    
    
    return 0;
}