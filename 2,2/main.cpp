#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief ���������� ������� �� �������� �������
* \param a - ���������
* \return ���������
*/
void solution();


/**
* \brief ����� ����� � ���������
* \param x - ������� �������� x
* \return ��� ������ (0-�����)
*/


int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "������� x = ";
	int x;
	cin >> x;

	solution();

	return 0;
}


int solution(int x) //������� ������ �������
{
	int y;
	const int a = 2.1;
	const int z=a*x;
	if (z >= a)
	{
		y = a*cos((x-1)/10);
		std::cout << "�������� y ����� " << y << endl;
	}
	else
	{
		y = a*sin((pow(x,2)+1)/10);
		std::cout << "�������� y ����� " << y << endl;
	}
	return y;
}
