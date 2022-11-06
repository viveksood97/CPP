#include <iostream>
#include <string>

class Rectangle {
    public:
        int length;
        int breadth;
        int area;
        std::string color;

        Rectangle(int l, int b) {
            length = l;
            breadth = b;
            area = l*b;
        }

        Rectangle(int l, int b, std::string c) : Rectangle(l, b){
            color = c;
        }

        void print(){
            std::cout << "length: " << length << std::endl;
            std::cout << "width: " << breadth << std::endl;
            std::cout << "area: " << area << std::endl;
            std::cout << "color: " << color << std::endl;
        }
};


int main() {
    Rectangle rect(10, 20, "red");
    rect.print();
}