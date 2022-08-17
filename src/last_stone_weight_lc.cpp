#include<iostream>
#include <vector>
#include<algorithm>

int lastStoneWeight(std::vector<int>& stones) {
        while(stones.size() > 1) {
            std::sort(stones.begin(), stones.end());
            int first = stones[-1];
            stones.pop_back();
            int second = stones[-1];
            int diff = abs(first -second);
            stones.pop_back();
            if(diff != 0) stones.push_back(diff);
            
        }
        
        return stones[0];
        
    }

int main() {
    std::vector<int> test = {2,7,4,1,8,1};
    std::cout << lastStoneWeight(test) << std::endl;
    return 0;
}