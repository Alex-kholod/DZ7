#include "Header.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    Vector a(5, 5);
    Circle b(5);
    Complex z(5, 5);
    Complex d(5, 5);
    //double x, y, R;
    //cout << "Введите координаты вектора x,y и радиус круга через Enter \n";
    //if (!(cin >> x >> y >> R))
    //{
    //    cout << "Error! \n";
    //    return 0;
    //}

    a.print();
    a.multiplication();
    a.vector_length();

    b.circle_length();
    b.square();

    z.sum(d);
    z.difference(d);
    z.division(d);
    z.multip(d);

    //Конструкторы копирования
    Vector o = a;
    o.print();
    return 0;
}