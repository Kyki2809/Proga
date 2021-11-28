#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

/**
* \brief Заполнение массива случайными числами
* \param array Массив
* \param size Размер массива
* \param LOW_BOUND Минимально возможное число
* \param UP_BOUND Максимально возможное число
**/
void RandomDigits(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND);

/**
* \brief Ввод массива с клавиатуры
* \param array Массив
* \param size Размер массива
**/
void UserInput(int* array, const size_t  size);

/**
* \brief Вывод массива
* \param array Массив
* \param size Размер массива
**/
void Print(int* array, const size_t size);

/**
* \brief Сумма элементов массива, начения которых >0
* \param array Массив
* \param size Размер массива
* \param return Значение суммы
**/
int GetSum(int* array, const size_t size);

/**
* \brief Найти количество тех элементов, значения которых положительны и не превосходят заданного числа А.
* \param array Массив
* \param size Размер массива
**/
void NumberGreaterNext(int* array, const size_t size, double a);

/**
* \brief Метод,Найти номер последней пары соседних элементов с разными знаками.
* \param array Массив
* \param size Размер массива
**/
void MultiplyАllmultiplesThirdElement(int* array, const size_t size);

/**
* \brief Выбор заполнеия массива
**/
enum class Filling
{
	RANDOM = 1,
	USER = 2
};


/**
* \brief Точка входа в программу
* \return Код ошибки (0-успех)
**/
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int LOW_BOUND = -40, UP_BOUND = 40;

	cout << "Введите количество элементов массива: ";
	int* array;
	int size;
	cin >> size;

	array = new int[size];
	cout << "1 - Сгенерировать массив\n2 - Заполнить массив вручную\n";
	int choice;
	cin >> choice;

	const auto filling = static_cast<Filling>(choice);
	switch (filling)
	{
	case Filling::RANDOM:
		RandomDigits(array, size, LOW_BOUND, UP_BOUND);
		Print(array, size);
		break;
	case Filling::USER:
		UserInput(array, size);
		Print(array, size);
		break;
	default:
		cout << "Ошибка! Не выбран ни один из вариантов";
	}

	cout << "Сумма элементов, значения которых по модулю меньше 10 = " << GetSum(array, size) << "\n\n";

	cout << "Найти количество тех элементов, значения которых положительны и не превосходят заданного числа А.:\n";
	int a;
	cout << "Введите 'a': ";
	cin >> a;
	NumberGreaterNext(array, size, a);

	cout << "Найти номер последней пары соседних элементов с разными знаками:\n";
	MultiplyАllmultiplesThirdElement(array, size);

	if (array != nullptr)
	{
		delete[] array;
		array = nullptr;
	};

	return 0;
}

void RandomDigits(int* array, const size_t  size, const int LOW_BOUND, const int UP_BOUND) {
	for (size_t i = 0; i < size; i++) {
		array[i] = rand() % (2 * UP_BOUND + 1) + LOW_BOUND;
	}
}

void UserInput(int* array, const size_t  size) {
	for (size_t i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> array[i];
	}
}

void Print(int* array, const size_t size) {
	cout << "array[" << size << "]" << "= {";
	for (size_t i = 0; i < size - 1; i++) {
		cout << array[i] << ";" << setw(3);
	}
	cout << array[size - 1] << "}\n\n";
}

int GetSum(int* array, const size_t size) {
	int sum = 0;
	for (size_t i = 0; i < size; i++) {
		if (abs(array[i]) < 10) {
			sum += array[i];
		}
	}
	return sum;
}

void NumberGreaterNext(int* array, const size_t size, double a) {
	int score = 0;
	for (size_t i = 0; i < size; i++) {
		if ((array[i] > 0) && (array[i] > a)) {
			score++;
		}
	}

	cout << score << "\n";// void функция

}

void MultiplyАllmultiplesThirdElement(int* array, const size_t size) {
	bool k = false;
	for (size_t i = 1; i < size; i++) {
		if (array[i] * array[i - 1] < 0) {
			cout << "вот эта пара под номерами" << i << " " << i - 1 << " ";
			k = true;
		}
	}
	if (k == false) {
		cout << "Таких пар нет ";
	}
}