#include <iostream>
#include <math.h>

using namespace std;

/
*\brief Функция для расчета y
*\param x Параметр x
*\return Параметр y

double GetY(double x);

/
*\brief Ввод значения х в программу
*\return Конечное значение

int main()
{
    setlocale(LC_ALL, "Russian");

    double x;
    cout << "Введите значение x = ";
    cin >> x;
    int LOW_BOUND = 0;
    int UP_BOUND = 0.85;
    double step = 0.05;


        for (x; x >= LOW_BOUND && x <= UP_BOUND; x += step)

        {
            if (x >= LOW_BOUND && x <= UP_BOUND)
            {
                auto y = GetY(x);

                cout << " y = " << y << "\n";
            }
            else
            {
                auto y = GetY(x);
                cout << " y = " << y << "\n" << "Нет решения, так как х не входит в область определения " << endl;
            }
        }
    return 0;
}

double GetY(double x)
{
    return x-(1/(3+sin(3.6*x)));
}
