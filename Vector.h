#ifndef VECTOR_H
#define VECTOR_H

#include "Figure.h"
#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapeze.h"
#include "memory"

class TVector{
public:
    TVector(int vCap); //конструктор класса
    void Push(std::shared_ptr<Figure> &temp); //добавление элемента в класс
    void Get(int index); //получение элемента класса
    void Delete(); //удаление последнего элемента класса
    void DeleteAll();
    friend std::ostream& operator<<(std::ostream& os, const TVector& vector); //вывод на стандартный поток
    ~TVector(); //деструктор класса
    int GetSize(); //получение размера класса
private:
    void ResizeVector(std::shared_ptr<Figure> *&array); //изменение размера класса
    int size; //текущее количество элементов
    int capacity; //выделенное место
    std::shared_ptr<Figure> *array; //массив
};

#endif