#include <iostream>
#include <cmath>

using namespace std;


double time(const double r,const double i,const double q);

int main()

{
	double r,q,i;
	cout<<"Введите сопротивление,силу тока и теплоту";
	cin>>r>>i>>q;
	double Time = time(r, i, q);

	cout<<"Ответ в секундах "<<Time;

	return 0;
}

double time(const double r,const double i,const double q){
	return (q/(pow(i,2)*r));
}
