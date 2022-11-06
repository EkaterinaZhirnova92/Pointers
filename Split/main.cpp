#include<iostream>

using namespace std;
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	FillRand(arr, n);
	Print(arr, n);
	int even_count = 0; //кол-во четных элем
	int odd_count = 0; //кол-во нечетных элем
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] % 2 == 0)even_count++;
		else odd_count++;
	}
	int* even_arr = new int[even_count] {};
	int* odd_arr = new int [odd_count] {};

	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_arr[j++] = arr[i];
		else odd_arr[k++] = arr[i];
	}
	Print(even_arr, even_count);
	FillRand(odd_arr, odd_count);


	delete[] odd_arr;
	delete[] even_arr;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

