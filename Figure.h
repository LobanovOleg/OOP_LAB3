#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
class Figure{
public:
    virtual void Print() = 0; 
    virtual ~Figure(){};
    friend std::ostream& operator <<(std::ostream&os, Figure&obj){
        obj.Print();
        return os;
    };
};

#endif