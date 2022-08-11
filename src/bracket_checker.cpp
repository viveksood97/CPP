#include <iostream>
#include <list>
#include <string>





bool isValid(std::string s) {
    std::list<char>brackets;
    for(char chr: s) {
        std::cout << chr << std::endl;
        if(chr == '(' or chr == '[' or chr == '{'){brackets.push_back(chr);}
        else{
            if((chr != ')' and brackets.front() == '(') || (chr != ']' and brackets.front() == '[') || (chr != '}' and brackets.front() == '{')) return false;
            brackets.pop_front();
        }
        
    }
    
    return brackets.size() != 0? false: true;
}

int main() {
    std::string test = "([])";
    std::cout << isValid(test) << std::endl;
    return 0;
}