#include <iostream>
#include <vector>

void print_seq(const auto& obj) {
    std::cout << "[";
    for(int i = 0; i != obj.size(); ++i) {
        if(i != obj.size() - 1) std::cout << obj[i] << ", ";
        else std::cout << obj[i];
    }
    std::cout << "]" << std::endl;
}

int main()
{   
    std::vector<int> vec1 = {12,3,4,5};
    std::vector<int> vec2;
    copy(vec1.begin(), vec1.end(), back_inserter(vec2));
    
    print_seq(vec2);

    return 0;
}
