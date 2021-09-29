#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Математическая функция, рассчитывающая значение a
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double z - константа, имеющая тип данных с плавающей точкой двойной точности
* \return значение a
**/
double GetA(const double x, const double y, const double z);

/**
* \brief Математическая функция, рассчитывающая значение b
* \param const double x - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double y - константа, имеющая тип данных с плавающей точкой двойной точности
* \param const double z - константа, имеющая тип данных с плавающей точкой двойной точности
* \return значение b
**/
double GetB(const double x, const double y, const double z);

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main() {
	const double x = -4.8;
	const double y = 17.5;
	const double z = 3.2;
	const auto a = GetA(x, y, z);
	const auto b = GetB(x, y, z);
	cout << "x = " << x
		<< "\ny = " << y
		<< "\nz = " << z
		<< "\na = " << a
		<< "\nb = " << b;
	return 0;
}

double GetA(const double x, const double y, const double z) {
	return ((y*z*pow(x,2))-(z/(pow(sin(x/z),2))));
}

double GetB(const double x, const double y, const double z) {
	return (z*exp(-sqrt(z))*cos((y*x)/z));
}
