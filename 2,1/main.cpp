#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief вычисление среднего арифметического кубов двух чисел
* \param a - первое число
* \param b - второе число
* \return среднее арифметическое кубов двух чисел
*/
double AverageMean(double a, double b);

/**
* \brief вычисление среднего геометрического модулей двух чисел
* \param a - первое число
* \param b - второе число
* \return среднее геометрическое модулей двух чисел
*/
double GeometricMean(double a, double b);

/**
* \brief меню выбора, что вычислить - среднее арифметическое или среднее геометрическое
*/
enum path
{
	first = 1,
	second = 2
};

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, choice;
	cout << "Введите два числа";
	cin >> a;
	cin >> b;
	cout << "Выберите что вы хотите посчитать:\n1 - среднее арифметическое кубов этих чисел\n2 - среднее геометрическое модулей этих чисел\nВыбор: ";
	cin >> choice;
	const int choosing = static_cast<path>(choice);
	switch (choosing) {
	case path::first:
	{
		double average_mean = AverageMean(a, b);
		cout << average_mean;
		break;
	}
	case path::second:
	{
		double geometric_mean = GeometricMean(a, b);
		cout << geometric_mean;
		break;
	}
	} return 0;
}

double AverageMean(double a, double b) {
	double average = ( ( pow( a, 3 ) + pow( b, 3 ) ) / 2 );
	return average;
}

double GeometricMean(double a, double b) {
	double geometric = ( fabs( a ) + fabs( b ) ) / 2 ;
	return geometric;
}