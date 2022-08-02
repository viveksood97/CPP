#include <iostream>


void add_and_print(int a, int b, void print(int n)) {
    print(a+b);
}
void print_nums(int num) {
    std::cout << num << std::endl; 
}
int main() {
    add_and_print(2,4,print_nums);
    return 0;
}