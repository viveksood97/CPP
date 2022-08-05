#include <iostream>
#include <vector>


template <typename T>
void pprint(T& to_print) {
    for (auto p: to_print) {
        std::cout << p << std::endl;
    }
}

template <class T>
void ppprint(T& to_print) {
    for (auto p: to_print) {
        std::cout << p << std::endl;
    }
}

int main() {
    std::vector<int> test(10, 100);
    pprint(test);
    ppprint(test);
    return 0;
}