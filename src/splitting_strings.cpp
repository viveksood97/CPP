#include <iostream>
#include <vector>
#include <string>


void pprint(const auto& obj) {
    std::cout << "[";
    for(int i = 0; i != obj.size(); ++i) {
        std::string out = i!=obj.size() ? obj[i] + ", " : obj[i];
        std::cout << out;
    }
    std::cout << "]" << std::endl;
}
//Kinda Useless to a large extent
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
    std::string test = "Hello World adad adada adadaadad";
    std::vector<std::string> output = split(test);
    pprint(output);
    
    return 0;
}
