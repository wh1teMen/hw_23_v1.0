#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Ввыод массива
void showArr(int arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]";
}
//функция,меняющая переменные на максимальное из них
void threeMax(int &num1,int &num2,int &num3) {
	int max =0;
	if (num1 > max)
		(max = num1);
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;
	num1 = max;	num2 = max;	num3 = max;
}
//задача 2
int z2arr(int arr[], int length) {
	int& zeroArr = *(arr+1);
	
	for (int i = 0; i < length; i++)
		//& arrRef = arr[i];
		if (arr[i] < 0)
			
		return arr[i];
		return zeroArr;
}
//Задача3 (обнуляет элементы второго массива, которые встречаются в первом)
void z3(int arr[], int length, int arr2[], int length2) {
	
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length2; j++)
			if (*(arr+i) == *(arr2+j))
				*(arr2+j) = 0;
		

	}

	

}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	//Задача 1
	cout << "Задача 1\n";
	int a = 3, b = 15, c = 4;
	threeMax(a, b, c);
	cout << a << "\t" << b << "\t" << c << endl;

	//Задача 2
	cout << "\nЗадача 2\n";
	int z2[10] = {9,111,6,4,-6,7,8,5,3,2 };
	showArr(z2, 10);
	cout << endl;
	cout << z2arr(z2, 10);
	cout << endl;

	//Задача 3
	cout << "\nЗадача 3\n";
	int z3_1[7] = { 3,6,4,1,4,8,2};
	int z3_2[6] = { 5,3,1,5,10,8};
	cout << "Первый массив:\n";
	showArr(z3_1, 7);
	cout << endl;
	cout << "Второй массив:\n";
	showArr(z3_2, 6);
	cout << "\nИтоговый массив:\n";
	z3(z3_1, 7, z3_2, 6);
	showArr(z3_2, 6);
	
	

	cout << endl;
	system("pause");
	return 0;

}