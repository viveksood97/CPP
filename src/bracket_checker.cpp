#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>





bool isValid(std::string s) {
        std::vector<char> stack;
        std::unordered_map<char, char> tracker = {{'}', '{'}, {']', '['}, {')', '('}};
        for(char c: s) {
            if(c == '{' or c == '[' or c == '(') stack.push_back(c);
            else if(stack.empty()) return false;
            
            else if(tracker[c] != stack.back()) return false;
            else stack.pop_back();
        }
        
        return true;
    }

    
int main() {
    std::string test = "([(])";
    std::cout << isValid(test) << std::endl;
    return 0;
}