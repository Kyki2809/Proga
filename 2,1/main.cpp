#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief вычисление среднего арифметического
* \param a - константа
* \param b - константа
* \return результат
*/
double first_step(const int a,const int b);

/**
* \brief вычисление среднего геометрического
* \param a - константа
* \param b - константа
* \return результат
*/
double second_step(const int a,const int b);


enum path
{
	first = 1,
	second = 2
};

int main() {
  setlocale(LC_ALL, "Russian");

	int a, b, choice;
	cout << "Введите два числа";
	cin >> a >> b;
	cout << "Выберите что вы хотите посчитать:\n1 - среднее арифметическое кубов этих чисел\n2 - среднее геометрическое модулей этих чисел\nВыбор: ";
	cin >> choice;
	const auto filling = static_cast<path>(choice);
	switch (filling) {
	case path::first:
	{
		first_step(a, b);
	}
	case path::second:
	{
		second_step(a, b);
	}
	default:
		cout << "Некоректный ввод.";
	}
}

double first_step (const int a,const int b){
	cout << (pow(a,3) + pow(b,3) ) / 2;
}

double second_step (const int a,const int b){
	cout << ( fabs (a) + fabs (b) ) / 2;
}
