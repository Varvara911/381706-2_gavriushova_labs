#include <iostream>
#include "utmatrix.h"
#include <ctime>
//---------------------------------------------------------------------------

void main()
{
	int n;

	setlocale(LC_ALL, "Russian");

	cout << "введите размер матрицы  n" << endl;
	cin >> n;
	TVector<int> f(n);
	TMatrix<int> a(n), b(n), c(n);
	int i, j;

	setlocale(LC_ALL, "Russian");
	cout << "тестирование работы программы"
		<< endl;
	for (i = 0; i < n; i++)
	for (j = i; j < n; j++)
	{
		a[i][j] = i * 10 + j;
		b[i][j] = (i * 10 + j) * 100;
	}

	long float start_time = clock();
	c = a + b;
	long float end_time = clock();

	cout << "вывод времени:" << endl;
	long float search_time = end_time - start_time;
	cout << search_time << " время работы" << endl;	// 1 сек = 1000 мс

	cout << "Matrix a = " << endl << a << endl;
	cout << "Matrix b = " << endl << b << endl;
	cout << "Matrix c = a + b" << endl << c << endl;
}