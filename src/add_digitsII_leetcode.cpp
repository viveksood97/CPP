#include <iostream>
#include <vector>

bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        int sum = 0;
        for(int i: nums) {
            sum = ~(sum^i);
        }
        if(sum <= k) return true;
        else return false;
    }

int main() {
    return 0;
}