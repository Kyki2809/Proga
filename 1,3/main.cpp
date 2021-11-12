#include <iostream>
#include <cmath>
using namespace std;

/**
* \brief Математическая функция, рассчитывающая время
* \param const double r - константа, сопротивление
* \param const double q - константа, количество теплоты
* \param const double i - константа, сила тока
* \return значение времени
**/
double Time (const double r,const double i,const double q);

int main()

{
	double r,q,i;
	cout<<"Введите сопротивление,силу тока и теплоту";
	cin>>r>>i>>q;
	double time = Time(r, i, q);

	cout<<"Ответ в секундах "<<time;

	return 0;
}

double Time (const double r,const double i,const double q) {
	return (q / (pow (i,2) * r) );
}
