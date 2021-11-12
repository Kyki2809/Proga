#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Функция проверки треугольника
* \param a - константа, сторона
* \param b - константа, сторона
* \param c - константа, сторона
* \return результат
*/
void test(const int a,const int b,const int c);

int main()
{
	int a,b,c;
	cout<<"введите стороны";
	cin>>a>>b>>c;
	test(a,b,c);
}

void test(const int a,const int b,const int c){
	if( (c > a) && (c > b) && (c==sqrt (pow (a,2) + pow (b,2) ) ) )
	cout<< "Прямоугольный";
	else if ( (a > c) && (a > b) && (a == sqrt (pow (c,2) + pow (b,2) ) ) )
	cout << "Прямоугольный";
	else if((b > a) && (b > c) && (b == sqrt ( pow (a,2) + pow (c,2) ) ) )
	cout << "Прямоугольный";
	else cout <<"Не прямоугольный";
}
