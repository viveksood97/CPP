#include <iostream>
#include <string>
#include <vector>

typedef std::string::const_iterator str_iter;

std::vector<std::string> split_string (const std::string& strs) {
     std::vector<std::string> out;
     std::string str = "";
     for(str_iter j = strs.begin(); j != strs.end(); ++j) {
          if(isspace(*j)) {
               if(str.size() > 0) {
                    out.push_back(str);
                    str = "";
               }
               
          }
          else if(j == strs.end() - 1){
               out.push_back(str);
          }

          else {
               str += *j;
          }
     }
     return out;
}

int main() {
    std::vector<std::string> output = split_string("            Hello            World s c sadad");
    for(auto str: output){
     std::cout << str << " :" << str.size() << std::endl;
    }
    return 0;
}