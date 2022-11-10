#include <iostream>
#include <string>
#include <vector>

void testing_string_typecast() {
    const std::string name = "Vivek";
    //name = "sood";    //Testing const functionality
    std::string abc = "Hello" + name + "World";
    std::cout << abc; 
}

void testing_strings() {
    std::string abc(10, 'H');
    std::cout << abc << std::endl;
}

void testing_ternary_operator() {
    std::vector<int> homework_even = {100, 20, 40, 60};
    std::vector<int> homework_odd = {100, 20, 40, 60, 70};

    int mid = homework_odd.size()/2;

    long center = homework_odd.size() % 2 == 0 ? (homework_odd[mid] + homework_odd[mid+1])/2: homework_odd[mid];

    std::cout << center;

}

int main() {
    // Testing Functions //
    //testing_string_typecast()
    //testing_strings();
    testing_ternary_operator();
    return 0;
}