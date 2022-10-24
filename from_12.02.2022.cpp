#include <iostream>

using namespace std;
void task_3() {
	cout << "Задание № 3: Даны два массива: А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать: \n";
	cout << "Элементы обоих массивов\n";
	cout << "Общие элементы двух массивов;\n";
	const int A = 10, B = 10, X = 20;
	int arr_1[A];
	int arr_2[B];
	int arr_3[X] = { 0 };
	int* par_1, * par_2, * par_3;
	int  i;
	//указатели
	par_1 = &arr_1[0];
	par_2 = &arr_2[0];
	par_3 = &arr_3[0];
	srand(time(NULL));
	cout << "Первый массив: \n";
	for (i = 0; i < A; i++) {
		*(par_1 + i) = rand() % 100;

		cout << *(par_1 + i) << " ";
	}
	cout << endl;
	cout << "Второй массив: \n";
	for (i = 0; i < B; i++) {
		*(par_2 + i) = rand() % 100;
		cout << *(par_2 + i) << " ";
	}
	cout << endl;
	for (i = 0; i < A; i++)
		*(par_3 + i) = *(par_1 + i);
	for (i = 0; i < B; i++)
		*(par_3 + A + i) = *(par_2 + i);
	cout << "Элементы обоих массивов: " << endl;
	for (i = 0; i < A + B; i++)

		cout << *(par_3 + i) << ", ";
	cout << endl << endl;
	cout << "Общие элементы двух массивов:\n";
	for (i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			if (*(par_1 + i) == *(par_2 + j)) {

				cout << *(par_1 + i) << " "; break;
			}
		}

	}
}
int main()
{    /* задание 3
	Элементы массива A, которые не включаются в B;
    Элементы массива B, которые не включаются в A;
    Элементы массивов A и B, которые не являются общими для них*/
    setlocale(LC_ALL, "rus");
	cout << "Задание № 1: Воспользовавшись указателями, поменяйте местами элементы массива с четными и нечетными индексами." << endl;
	const int size = 10;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
	int* par, tmp;
	par = &arr[0];
	cout << "До замены " << endl << endl;
	for (int i = 0; i < 10; i++) {
		cout << *(par + i) << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++) {


		if ((i + 1) % 2 == 1 && i != 10) {
			tmp = *(par + i);
			*(par + i) = *(par + i + 1);
			*(par + i + 1) = tmp;
		}
	}
	cout << "После замены " << endl << endl;

	for (int i = 0; i < 10; i++) {
		cout << *(par + i) << " ";
	}

	cout << endl << endl;
	cout << "Задание № 2: Даны два массива, упорядоченных по возрастанию: arr_1[A] и arr_2[B]. \n";
	cout << "Сформируйте массив arr_3[A + B], состоящий из элементов массивов arr_1 и arr_2, упорядоченный по возрастанию. \n";
	cout << "Используйте синтаксис указателей\n" << endl;
	const int A = 10, B = 10, X = 20;
	int arr_1[A] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr_2[B] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr_3[X] = { 0 };
	int* par_1, * par_2, * par_3;
	int  i;
	//указатели
	par_1 = &arr_1[0];
	par_2 = &arr_2[0];
	par_3 = &arr_3[0];
	for (i = 0; i < A; i++)
		*(par_3 + i) = *(par_1 + i);
	for (i = 0; i < B; i++)
		*(par_3 + A + i) = *(par_2 + i);
	cout << "Объеденяем два массива arr_1 и arr_2, выводим результат: " << endl;
	for (i = 0; i < A + B; i++)
		cout << *(par_3 + i) << ", ";
	cout << endl << endl;
	int tmp1;
	cout << "Выводим упорядоченный массив arr_3: " << endl;
	for (int i = 0; i < (A + B); i++) {
		for (int j = (A + B - 1); j > i; j--) {
			if (*(par_3 + j) < *(par_3 + j - 1)) {
				tmp1 = *(par_3 + j);
				*(par_3 + j) = *(par_3 + j - 1);
				*(par_3 + j - 1) = tmp1;
			}
		}
	}



	for (int i = 0; i < (A + B); i++) {

		cout << *(par_3 + i) << ", ";
	}
	cout << endl << endl;
	task_3();
}