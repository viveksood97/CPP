#include "../include/testing_class_method_scopes.h"

void Testing::print_n() {
    std::cout << n << std::endl;
}
int main() {
    Testing test;
    test.print_n();
    return 0;
}