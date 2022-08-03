#include <iostream>
#include <vector>
#include <string>


void pprint(const auto& obj) {
    std::cout << "[";
    for(int i = 0; i != obj.size(); ++i) {
        if(i != obj.size() - 1) std::cout << obj[i] << ", ";
        else std::cout << obj[i];
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::vector<int> numbers = {1,2,3,4,5,6};
    std::vector<char> letters = {'a', 'b', 'c', 'd'};
    std::vector<std::string> words = {"aaaaa", "bbbbb", "ccccc", "ddddd", "sdasdsdad"};

    pprint(numbers);
    pprint(letters);
    pprint(words);
    return 0;
}