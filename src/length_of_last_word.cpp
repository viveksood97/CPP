#include <iostream>
#include <string>
#include <algorithm>

int lengthOfLastWord(std::string s) {
    int i= s.size();
    if(s.size() == 1 && !isspace(s[-1])) return 1;
   
    while(i != 0 && isspace(s[i])) {
        --i;
    }
    
    int j = i;
    while(j != 0 && !isspace(s[j])) {
        --j;
    }
    if(j != i){
        return (s.substr(j + 1, i - j).size());
        
    }
    return 0;
    
    
}


int main() {
   
    std::cout << lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
    return 0;
}