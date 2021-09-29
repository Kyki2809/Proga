#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief �������������� �������, �������������� �������� a
* \param const double x - ���������, ������� ��� ������ � ��������� ������ ������� ��������
* \param const double y - ���������, ������� ��� ������ � ��������� ������ ������� ��������
* \param const double z - ���������, ������� ��� ������ � ��������� ������ ������� ��������
* \return �������� a
**/
double GetA(const double x, const double y, const double z);

/**
* \brief �������������� �������, �������������� �������� b
* \param const double x - ���������, ������� ��� ������ � ��������� ������ ������� ��������
* \param const double y - ���������, ������� ��� ������ � ��������� ������ ������� ��������
* \param const double z - ���������, ������� ��� ������ � ��������� ������ ������� ��������
* \return �������� b
**/
double GetB(const double x, const double y, const double z);

/**
 * \brief ����� ����� � ���������.
 * \return ��� ������ (0 - �����).
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
