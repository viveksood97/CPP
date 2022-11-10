#include <iostream>
#include <vector>
#include <algorithm>
bool IsOdd(const int& i) {
    return i % 2;
}

int main() {
    std::vector<int> vec{ 10, 25, 40, 55 };
  
    // Iterator to store the position of element found
    std::vector<int>::iterator it;
  
    // std::find_if
    it = std::find_if(vec.begin(), vec.end(), IsOdd);
    std::cout << "The first odd value is " << *it << '\n';
    return 0;
}