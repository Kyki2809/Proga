#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Функция для расчета y
* \param x Аргумент x
* \return Значение y
*/
double GetY(const double x);

/**
* \brief Ввод значения х в программу
* \return Конечное значение
*/
int main()
{
    setlocale(LC_ALL, "Russian");

    const double stepX = 0.05, limit = 1.01;
    double x = 0;


    while (x <= limit) 
    { 
        cout << " Veriable x: " << x << " |" << " Veriable function: " << GetY(x) << endl; 
        x += stepX; 
    }
}

double GetY(const double x)
{
    return x - ( 1 / ( 3 + sin ( 3.6 * x ) ) );
}