#include "../include/testing_class_method_scopes.h"


void print_n(int n) {
    std::cout << n << std::endl;
}

void Testing::print_n() {
    ::print_n(10);
}

void Testing::change_pi()const{
    PI =100;
}
int main() {
    Testing test;
    test.print_n();
    return 0;
}