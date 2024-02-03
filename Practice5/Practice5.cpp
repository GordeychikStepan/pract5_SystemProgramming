// Practice5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Минимум из 3 int: " << minFunction(5, 3, 8) << std::endl;
    std::cout << "Минимум из 4 int: " << minFunction(5, 3, 8, 2) << std::endl;
    std::cout << "Минимум из 3 float: " << minFunction(5.2f, 3.7f, 8.1f) << std::endl;
    std::cout << "Минимум из 2 double: " << minFunction(5.8, 3.2) << std::endl;

    return 0;
}
