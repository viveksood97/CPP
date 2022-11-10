#include <iostream>
#include <cstring>

class String {
 private:
    int str_size;
    char *s;
 public:
    String(const char* other) {
        //parameterised constructor
        this->str_size = std::strlen(other);
        this->s = new char[str_size];
        for(int i = 0; i != this->str_size; ++i) {
            this->s[i] = other[i];
        }

    }

    String(const String& other) {
        //copy constructor
        this->str_size = other.str_size;
        this->s = new char[str_size + 1];
        for(int i = 0; i != this->str_size; ++i) {
            this->s[i] = other.s[i];
        }
        this->s[str_size] = 0;
    }

    String(String&& other) {
        //move constructor
        this->str_size = other.str_size;
        this->s = other.s;
        other.s = nullptr;
        other.str_size = 0;
    }

    ~String() {
        delete[] s;
    }

    void print(){
        for(int i = 0; i != this->str_size; ++i) {
           std::cout << this->s[i];
        }
    }
};

int main() {
    String string("Vivek");
    String string1(string);
    String string2((String&&)"Vivek Sood");
    string1.print();
    string2.print();
    return 0;
}