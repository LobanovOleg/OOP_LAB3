#include "Rhombus.h"
#include <iostream>

Rhombus::Rhombus() : Rhombus(0) { }

Rhombus::Rhombus(size_t i) : side_a(i){
    std::cout << "Ромб создан: " << std::endl;
}

Rhombus::Rhombus(std::istream &is){
    is >> side_a;
}

Rhombus::Rhombus(const Rhombus& orig){
    std::cout << "Копия ромба создана" << std::endl;
    side_a = orig.side_a;
}

std::ostream& operator << (std::ostream& os, const Rhombus& obj){
    os << "a=" << obj.side_a << ", b=" << obj.side_a << ", c=" << obj.side_a << ", d=" << obj.side_a << std::endl;
    return os;
}

void Rhombus::Print(){
    std::cout << "a=" << side_a << ", b=" << side_a << ", c=" << side_a << ", d=" << side_a << std::endl;
}

Rhombus& Rhombus::operator=(const Rhombus& right){
    if(this == &right){
        return *this;
    }
    side_a = right.side_a;
    return *this;
}

Rhombus::~Rhombus(){
    std::cout << "Ромб удален" << std::endl;
}