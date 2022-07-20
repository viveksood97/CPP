#include <iostream>
#include <vector>
#include <string>


template<typename T>
void print_seq(const T& obj) {
    std::cout << "[";
    for(int i = 0; i != obj.size(); ++i) {
        if(i != obj.size() - 1) std::cout << obj[i] << ", ";
        else std::cout << obj[i];
    }
    std::cout << "]" << std::endl;
}


int main() {
    std::vector<std::string> str = {"Hello World", "dadad"};
    std::vector<std::string>::iterator begin = str.begin();
    std::vector<std::string>::iterator end = str.end();

    std::vector<std::string> str_cp(str.size());

    std::vector<std::string>::iterator out = str_cp.begin();

    while(begin != end) {
        *out++ = *begin++;
    }

    print_seq(str);
    print_seq(str_cp);
    return 0;
}