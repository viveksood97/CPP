#include <iostream>
#include <vector>
#include <map>

int singleNumber(std::vector<int>& nums) {

    int res = 0;
    
    for(int i: nums){
        res = res^i;
    }

    return res;
}

int main() {
    return 0;
}