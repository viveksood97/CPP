#include <iostream>
#include <vector>

template<typename T>
std::ostream & operator << (std::ostream &out, const std::vector<T> &vec) {\

    out << "[";
    for(int i = 0; i !=vec.size() - 1; ++i) {
        out << vec[i] << ", ";
    }
    out << vec[vec.size() - 1] << "]" << std::endl;
    return out;
}
int main() {
    std::vector<int> temp = {1, 2, 3, 4};
    std::vector<char> temp1 = {'v', 'i', 'v', 'e', 'k'};
    std::cout << temp1;
    std::cout << temp;
    return 0;
}