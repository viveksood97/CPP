#include <iostream>
#include <string>
#include <vector>

struct info {
    std::string name;
};



int main() {
    info first, last;
    first.name = "Vivek";
    last.name = "Sood";
    std::vector<info> information = {first, last};
    
    for(std::vector<info>::const_iterator i = information.begin(); i != information.end(); ++i) {
        std::cout << i->name << " ";
    }
    return 0;
}