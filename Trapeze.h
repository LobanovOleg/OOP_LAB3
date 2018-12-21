#ifndef TRAPEZE_H
#define TRAPEZE_H

#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Trapeze: public Figure{
public:
    Trapeze();
    Trapeze(std::istream &is);
    Trapeze(size_t i, size_t j, size_t k);
    Trapeze(const Trapeze& orig);
    friend std::ostream& operator<<(std::ostream& os, const Trapeze& obj);
    Trapeze& operator=(const Trapeze& right);
    void Print() override;
    ~Trapeze();
    friend class TVector;
private:
    size_t side_a;
    size_t side_b;
    size_t side_c;
};

#endif