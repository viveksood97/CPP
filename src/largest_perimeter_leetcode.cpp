#include <iostream>
#include <vector>
#include <algorithm>

int largestPerimeter(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        int large_one = nums[0];
        int large_two = nums[1];
        for(const auto &x: nums) {
            if(large_two + x >= large_one) {
                std::cout << large_two << large_one << x << '\n';
                return large_two + large_one + x;
            }
        }
        return 0;
    }

int main() {
    std::vector<int> test = {2,1,2};
    std::cout << largestPerimeter(test);
    return 0;
}