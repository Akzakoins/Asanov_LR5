#include <iostream>
#include "Asanov_MathTask.h"

int main()
{
    std::cout << "Введите длину первой стороны: ";
    int a = inputSide();

    std::cout << "Введите длину второй стороны: ";
    int b = inputSide();

    int area = calcRectangleArea(a, b);
    std::cout << "Площадь прямоугольника: " << area << std::endl;

    return 0;
}
