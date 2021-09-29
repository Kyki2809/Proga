#include <iostream>
#include <math.h>

using namespace std;

/
*\brief ������� ��� ������� y
*\param x �������� x
*\return �������� y

double GetY(double x);

/
*\brief ���� �������� � � ���������
*\return �������� ��������

int main()
{
    setlocale(LC_ALL, "Russian");

    double x;
    cout << "������� �������� x = ";
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
                cout << " y = " << y << "\n" << "��� �������, ��� ��� � �� ������ � ������� ����������� " << endl;
            }
        }
    return 0;
}

double GetY(double x)
{
    return x-(1/(3+sin(3.6*x)));
}
