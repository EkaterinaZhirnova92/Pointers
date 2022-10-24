#include<iostream>

using namespace std;


//#define POINTERS_BASICS
void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;// вывод значения перем а на экран
	cout << &a << endl; //взятие адреса перем а прямо при выводе
	cout << pa << endl; //вывод на экран адреса перем а хранящегося в указателе ра
	cout << *pa << endl; //разименование указателя ра и получение значения по адресу

	int* pb;
	int b = 3;
	pb = &b;
#endif

	const int n = 5;
	int arr[n] = { 3, 5, 8, 13, 21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i )<< "\t";
	}
	cout << endl;
}