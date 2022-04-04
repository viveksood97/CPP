#include <iostream>
#include <algorithm>
#include <vector>

bool isPallindrome(const std::string& word) {
    return std::equal(word.begin(), word.end(), word.rbegin());
}

std::vector<std::string> allWords(const std::string& word) {
    std::vector<std::string> words;
    for(std::string::const_iterator i = word.begin(); i!=word.end(); ++i) {
        std::string singleWord;
        for(std::string::const_iterator j = i; j!=word.end(); ++j) {
            singleWord += *j;
            words.push_back(singleWord);
        }
    }
    return words;
}

std::string longestPalindrome(const std::string& s) {
        std::string longest_word;
        for(std::string::const_iterator i = s.begin(); i!=s.end(); ++i) {
            std::string singleWord;
            for(std::string::const_iterator j = i; j!=s.end(); ++j) {
                singleWord += *j;
                if(longest_word.size() < singleWord.size()){
                    if(isPallindrome(singleWord)) {
                        longest_word = singleWord;
                    }
                    
                }
            }
            }
    return longest_word;
    }

