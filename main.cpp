#include <iostream>
#include "Vector.h"
#include "Trapeze.h"
#include "Pentagon.h"
#include "Rhombus.h"
#include <memory>

using std::cin;
using std::cout;
using std::endl;

void menu();

int main() {
    int key;
    int index;
    int a = 0;
    int b = 0;
    int c = 0;
    std::shared_ptr<Figure> tri;
    TVector vector(2);
    do {
        menu();
        cin >> key;
        switch(key){
            case 1:
                cout << "Введите стороны трапеции" << endl;
                cin >> a >> b >> c;
                tri = std::shared_ptr<Figure>(new Trapeze(a, b, c));
                cout << "OK" << endl;
                vector.Push(tri);
                break;
            case 2:
                cout << "Введите стороны ромба" << endl;
                cin >> a;
                tri = std::shared_ptr<Figure>(new Rhombus(a));
                vector.Push(tri);
                break;
            case 3:
                cout << "Введите стороны пятиугольника" << endl;
                cin >> a >> b;
                tri = std::shared_ptr<Figure>(new Pentagon(a, b));
                vector.Push(tri);
                break;
            case 4:
                cout << "Введите индекс фигуры" << endl;
                cin >> index;
                if (index >= vector.GetSize()) {
                    cout << "Фигура не найдена" << endl;
                } else {
                        vector.Get(index);
                    }
                break;
            case 5:
                if(vector.GetSize() > 0){
                    vector.Delete();
                } else {
                    cout << "Фигура не найдена" << endl;
                }
                break;
            case 6:
                vector.~TVector();
                key = 0;
                break;
            case 7:
                cout << vector;
                break;
            case 0:
                break;
            default:
                cout << "Неизвестная команда" << endl;
                break;
            }
        } while(key);
        cout << vector.GetSize() << endl;
        return 0;    
    }   

void menu(){
    cout << "Введите номер" << endl;
    cout << "1) Дать значения трапеции" << endl;
    cout << "2) Дать значения ромбу" << endl;
    cout << "3) Дать значения пятиугольнику" << endl;
    cout << "4) Индекс фигуры" << endl;
    cout << "5) Удалить последнюю фигуру" << endl;
    cout << "6) Удалить все фигуры" << endl;
    cout << "7) Напечатать вектор" << endl;
    cout << "0) Выход" << endl;
}
