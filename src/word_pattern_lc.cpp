#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

void pprint(const auto& obj) {
    std::cout << "[";
    for(int i = 0; i != obj.size(); ++i) {
        if(i != obj.size() - 1) std::cout << obj[i] << ", ";
        else std::cout << obj[i];
    }
    std::cout << "]" << std::endl;
}

std::vector<std::string> split_string(std::string words) {
    std::vector<std::string> result;
    std::string word;
    for(char c: words) {
        if(isspace(c)){
            result.push_back(word);
            word = "";
        }
        else {
            word.push_back(c);
        }
    }
    result.push_back(word);
    return result;
    
}

bool wordPattern(std::string pattern, std::string s) {
    std::vector<std::string> split_words = split_string(s);
    std::map<char, std::string> tracker;
    std::map<std::string, char> reverse_tracker;
    if(pattern.size() != split_words.size()) return false;
    for(std::string::size_type i = 0; i != pattern.size(); ++i) {
        if(tracker.find(pattern[i]) == tracker.end() && reverse_tracker.find(split_words[i]) == reverse_tracker.end()) 
        {
            tracker.insert({pattern[i], split_words[i]});
            reverse_tracker.insert({split_words[i], pattern[i]});
        }
        else {
            if((tracker[pattern[i]] != split_words[i]) && (reverse_tracker[split_words[i]] != pattern[i])) return false;
        }
    }

    return true;
   
}

int main() {
   if(wordPattern("abba", "dog cat cat dog")) std::cout << "chal gaya" << std::endl;
    return 0;
}