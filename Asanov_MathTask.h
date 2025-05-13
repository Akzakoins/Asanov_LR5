#ifndef ASANOV_MATH_TASK_H
#define ASANOV_MATH_TASK_H

#include <iostream>

// Контроль ввода (сторона должна быть > 0)
bool isValidSide(int side)
{
    return side > 0;
}

// Ввод стороны прямоугольника
int inputSide()
{
    int side;
    std::cin >> side;
    while (!isValidSide(side))
    {
        std::cout << "Ошибка: сторона должна быть положительной. Повторите ввод: ";
        std::cin >> side;
    }
    return side;
}

// Вычисление площади
int calcRectangleArea(int a, int b)
{
    return a * b;
}

#endif
