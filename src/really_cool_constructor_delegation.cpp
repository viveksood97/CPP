#include <iostream>

struct X {
    int i;
   X(int x, int y) : X(x+y) { }
   X(int x, int y, int z) : X(x*y*z) {}
   X(int x) {i = x;};
};


int main() {
    X var1(55,11);
    X var2(2,4,6);
    std::printf("%d, %d\n", var1.i, var2.i);
    return 0;
    
}