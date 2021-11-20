#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief вычисление среднего арифметического.
* \param value1 - константа.
* \param value2 - константа.
* \return среднее арифметическое.
*/
double arithmetic_mean(const double value1,const double value2);

/**
* \brief вычисление среднего геометрического.
* \param value1 - константа.
* \param value2 - константа.
* \return среднее геометрическое.
*/
double geometric_mean(const double value1,const double value2);

/**
* \brief выбор что user хочет посчитать.
*/
enum path
{
	first = 1,
	second = 2
};

int main() {
  setlocale(LC_ALL, "Russian");

	int value1, value2, choice;
	cout << "Введите два числа";
	cin >> value1 >> value2;
	cout << "Выберите что вы хотите посчитать:\n1 - среднее арифметическое кубов этих чисел\n2 - среднее геометрическое модулей этих чисел\nВыбор: ";
	cin >> choice;
	const auto filling = static_cast<path>(choice);
	switch (filling) {
	case path::first:
	{
		arithmetic_mean(value1, value2);
		break;
	}
	case path::second:
	{
		geometric_mean(value1, value2);
		break;
	}
	default:
		cout << "Некоректный ввод.";
		break;
	}
}

double arithmetic_mean (const double value1,const double value2){
	return ( (pow(value1,3) + pow(value2,3) ) / 2 );
}

double geometric_mean (const double value1,const double value2){
	return ( ( fabs (value1) + fabs (value2) ) / 2 );
}
