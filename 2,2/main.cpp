#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief вычисление функции по заданной формуле
* \param a - константа
* \return результат
*/
void solution();


/**
* \brief Точка входа в программу
* \param x - входное значение x
* \return Код ошибки (0-успех)
*/


int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите x = ";
	int x;
	cin >> x;

	solution();

	return 0;
}


int solution(int x) //функция поиска решений
{
	int y;
	const int a = 2.1;
	const int z=a*x;
	if (z >= a)
	{
		y = a*cos((x-1)/10);
		std::cout << "Значение y равно " << y << endl;
	}
	else
	{
		y = a*sin((pow(x,2)+1)/10);
		std::cout << "Значение y равно " << y << endl;
	}
	return y;
}
