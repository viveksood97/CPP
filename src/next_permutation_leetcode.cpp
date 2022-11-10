#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
        if(nums.size() > 2) {
            std::vector<int> first = std::vector<int>(nums.begin(), nums.begin() + 1);
            std::vector<int> last = std::vector<int>(nums.begin() + 1, nums.end());
            std::sort(last.begin(), last.end(), std::greater<int>());
            first.insert(first.end(), last.begin(), last.end());
            if(std::equal(first.begin(), first.end(), nums.begin())) {
                std::rotate(first.begin(), first.begin()+1, first.end());
            }
            nums = first;
        }
        else {
            std::reverse(nums.begin(), nums.end());
        }
        for(int i = 0; i !=nums.size(); ++i) {
            std::cout << nums[i];
        }
        
       
        

    }

int main() {
    std::vector<int> test = {1,3,2};
    
    nextPermutation(test);
    return 0;
}