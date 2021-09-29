#include <iostream>
#include <cmath>

using namespace std;

void first_step(const int a,const int b);

void second_step(const int a,const int b);




enum path
{
	first = 1,
	second = 2
};

int main() {
  setlocale(LC_ALL, "Russian");

	int a, b, choice;
	cout << "������� ��� �����";
	cin>>a>>b;
	cout << "�������� ��� �� ������ ���������:\n1 - ������� �������������� ����� ���� �����\n2 - ������� �������������� ������� ���� �����\n�����: ";
	cin >> choice;
	const auto filling = static_cast<path>(choice);
	switch (filling) {
	case path::first:
	{
		first_step(a, b);
	}
	case path::second:
	{
		second_step(a, b);
	}
	default:
		cout << "����������� ����.";
	}
}

void first_step(const int a,const int b){
	cout<<(pow(a,3) + pow(b,3))/2;
}

void second_step(const int a,const int b){
	cout<<(fabs(a) + fabs(b))/2;
}
