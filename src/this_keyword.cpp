#include <iostream>


class Entity{
 public:
    int x,y;
    Entity(){};
    Entity(int x, int y){
        this->x = x;
        this->y = y;
    }
};

int main() {
    Entity ent(10,3);
    Entity ent1(11,12);
    ent1 = ent;
    std::cout << ent1.x << ent1.y << std::endl;
    return 0;
}