#include <iostream>

class TestingNewAndDelete {
    public:
    int a = 0;
    TestingNewAndDelete() {
        std::cout << "Constructor Executed" << std::endl;
    }
    
    ~TestingNewAndDelete() {
        std::cout << "Destructor Executed" << std::endl;
    }
};

int main() {
    
    TestingNewAndDelete* T = new TestingNewAndDelete;
    delete T;

    TestingNewAndDelete* t = new TestingNewAndDelete[10];
    delete[] t;
    return 0;
}