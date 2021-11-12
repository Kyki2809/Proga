#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief ћатематическа¤ функци¤, рассчитывающа¤ площадь пр¤моугольника
* \param const double a - константа, ширина пр¤моугольника
* \param const double b - константа, длина пр¤моугольника
* \return значение площади
**/
double rectangle(const double a,const double b);

/**
* \brief ћатематическа¤ функци¤, рассчитывающа¤ площадь треугольника
* \param const double a - константа, перва¤ сторона
* \param const double b - константа, втора¤ сторона
* \param const double c - константа, треть¤ сторона
* \return значение площади
**/
double triangle(const double a,const double b, const double c);


int main()

{
	double a,b,c;
	cout<<"¬ведите 3 стороны";
	cin>>a>>b>>c;

	double Rectangle = rectangle(a,b);
	double Triangle = triangle(a,b,c);

	cout<<Rectangle<<" "<<Triangle;
	return 0;
}

double rectangle(const double a,const double b){
	return a*b;
}

double triangle(const double a,const double b, const double c){
	double p = (a + b + c) / 2;
	return pow(p*(p - a)*(p - b)*(p - c),0.5);
}
