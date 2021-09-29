#include <iostream>
#include <cmath>

using namespace std;



double rectangle(const double a,const double b);

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
