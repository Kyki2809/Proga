#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


/**
* \brief ���������� ������� ���������� �������
* \param array ������
* \param size ������ �������
* \param LOW_BOUND ���������� ��������� �����
* \param UP_BOUND ����������� ��������� �����
**/
void randomDigits(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND);

/**
* \brief ���� ������� � ����������
* \param array ������
* \param size ������ �������
**/
void userInput(int* array, const int  size);

/**
* \brief ����� �������
* \param array ������
* \param size ������ �������
**/
void Print(int* array, const int size);

/**
* \brief ����� ��������� �������, ������� ������� >0
* \param array ������
* \param size ������ �������
* \param return �������� �����
**/
int GetSum(int* array, const int size);

/**
* \brief ����� ���������� ��� ���������, �������� ������� ������������ � �� ����������� ��������� ����� �.
* \param array ������
* \param size ������ �������
**/
void numberGreaterNext(int* array, const int size);

/**
* \brief �����,����� ����� ��������� ���� �������� ��������� � ������� �������.
* \param array ������
* \param size ������ �������
**/
void multiply�llmultiplesThrebyThirdElement(int* array, const int size);

/**
* \brief ����� ��������� �������
**/
enum class Filling
{
	RANDOM = 1,
	USER = 2
};


/**
* \brief ����� ����� � ���������
* \return ��� ������ (0-�����)
**/
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int LOW_BOUND = -40, UP_BOUND = 40;

	cout << "������� ���������� ��������� �������: ";
	int* array;
	int size;
	cin >> size;

	array = new int[size];
	cout << "1 - ������������� ������\n2 - ��������� ������ �������\n";
	int choice;
	cin >> choice;

	const auto filling = static_cast<Filling>(choice);
	switch (filling)
	{
	case Filling::RANDOM:
		randomDigits(array, size, LOW_BOUND, UP_BOUND);
		Print(array, size);
		break;
	case Filling::USER:
		userInput(array, size);
		Print(array, size);
		break;
	default:
		cout << "������! �� ������ �� ���� �� ���������";
	}

	cout << "����� ���������, �������� ������� �� ������ ������ 10 = " << GetSum(array, size) << "\n\n";

	cout << "����� ���������� ��� ���������, �������� ������� ������������ � �� ����������� ��������� ����� �.:\n";
	numberGreaterNext(array, size);

	cout << "����� ����� ��������� ���� �������� ��������� � ������� �������:\n";
	multiply�llmultiplesThrebyThirdElement(array, size);

	delete[] array;

	return 0;
}

void randomDigits(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND) {
	for (size_t i = 0; i < size; i++) {
		array[i] = rand() % (2 * UP_BOUND + 1) + LOW_BOUND;
	}
}

void userInput(int* array, const int  size) {
	for (size_t i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> array[i];
	}
}

void Print(int* array, const int size) {
	cout << "array[" << size << "]" << "= {";
	for (size_t i = 0; i < size - 1; i++) {
		cout << array[i] << ";" << setw(3);
	}
	cout << array[size - 1] << "}\n\n";
}

int GetSum(int* array, const int size) {
	int sum = 0;
	for (size_t i = 0; i < size; i++) {
		if (array[i] < 0) {
			sum += array[i];
		}
	}
	return sum;
}

void numberGreaterNext(int* array, const int size) {
	double A;
	int c=0;
	cin>>A;
	for (size_t i = 0; i < size; i++) {
		if ((array[i] > 0)&&(array[i]>A) ){
			c++;
		}
	}

	cout << c <<"\n";
}

void multiply�llmultiplesThrebyThirdElement(int* array, const int size) {
	int k=0;
	for (size_t i = 0; i < size; i++) {
		if (array[i]*array[i-1]<0) {
						cout<<"��� ��� ���� ��� ��������"<< i<<" "<<i-1<<" ";
						k=1;
		}
	}
	if (k==0){
				cout<<"����� ��� ��� ";
		}
}
