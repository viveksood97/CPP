#include <iostream>
#include <vector>
#include <algorithm>
int main() {

    std::vector<int> vec = {1,2,3,4,5,6};

    std::cout << *find(vec.begin(), vec.end(), 4) << std::endl;
    return 0;
}