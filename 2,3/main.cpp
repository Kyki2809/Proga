#include <iostream>
#include <cmath>

using namespace std;

void test(const int a,const int b,const int c);

int main()
{
	int a,b,c;
	cout<<"введите стороны";
	cin>>a>>b>>c;
	test(a,b,c);
}

void test(const int a,const int b,const int c){
	if((c>a) and (c>b) and (c==sqrt(pow(a,2)+pow(b,2))))
	cout<<"Прямоугольный";
	else if ((a>c) and (a>b) and (a==sqrt(pow(c,2)+pow(b,2))))
	cout<<"Прямоугольный";
	else if((b>a) and (b>c) and (b==sqrt(pow(a,2)+pow(c,2))))
	cout<<"Прямоугольный";
	else cout<<"Не прямоугольный";
}
