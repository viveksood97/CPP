#include <iostream>
#include <map>
#include <vector>

int main() {
    std::string s;
    std::vector<int> test = {1,2,3,4};
    std::map<std::string, int> counters;

    while(std::cin >> s && counters.size() < 2) {
        std::cout << counters.size();
        ++counters[s];
    }

    for(std::map<std::string, int>::const_iterator it = counters.begin(); it != counters.end(); ++it) {
        std::cout << (*it).first <<"\t" << it->second << std::endl;
    }
    // for(std::vector<int>::const_iterator it = test.begin(); it != test.end(); ++it) {
    //     std::cout << *it << std::endl;
    // }

    return 0;
}