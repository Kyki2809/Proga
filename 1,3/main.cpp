#include <iostream>
#include <cmath>

using namespace std;


double time(const double r,const double i,const double q);

int main()

{
	double r,q,i;
	cout<<"������� �������������,���� ���� � �������";
	cin>>r>>i>>q;
	double Time = time(r, i, q);

	cout<<"����� � �������� "<<Time;

	return 0;
}

double time(const double r,const double i,const double q){
	return (q/(pow(i,2)*r));
}
