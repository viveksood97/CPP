#include <iostream>

//Problem code refer notes for explaination
// class Vector{
//  private:
//     int size;
//     int * vec;
//  public:
//     Vector(int size = 10) {
//         this -> size = size;
//         this -> vec = new int [size];
//     }
    

//     ~Vector() {
//         delete[] this->vec;
//     }
// };

#include <iostream>

class Vector{
 private:
    int size;
    int * vec;
 public:
    Vector(int size = 10) {
        this -> size = size;
        this -> vec = new int [size];
    }

    Vector(const Vector& other) {
        this->size = other.size;
        this->vec = new int[this->size];
        for(int i = 0; i != this->size; ++i) {
            this->vec[i] = other.vec[i];
        }
    }

    ~Vector() {
        delete[] this->vec;
    }
};



int main() {
    Vector a(5);
    Vector b(a);
    return 0;
}