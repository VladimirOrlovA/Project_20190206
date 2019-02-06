#include<iostream>
#include<cstdlib>	// для функции srand
#include<ctime>		// для функции time
#include<iomanip>	// для fixed setprecision

using namespace std;


/// Project_20190206  тема: бинарный поиск, передача массивов в функцию

// Бинарный поиск - только упорядоченные данные, т.е. отсортированнные

/*
int binarySearch(int a[], int size, int key)
{
	int low = 0;
	int high = size - 1;
	int middle;

	while (low <= high)
	{
		middle = (low + high) / 2;
		if (a[middle] < key)
			low = middle + 1;
		else if (a[middle] > key)
			high = middle - 1;
		else
			return middle;
	}
	return -1;
}


void change_var(int a)
{
	a = 100;
}

void fillArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = (i + 1) * 10;
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}


int main()
{
	int arr[9] = { 1,3,4,5,6,9,11,12,14 };
	//cout << binarySearch(arr, 9, 12);
	printArray(arr, 5);
	fillArray(arr, 5);
	printArray(arr, 5);

	system("pause");
	return 0;
}
*/


// 17.	**Напишите функцию, которая принимает три массива целых чисел.Выполнить поэлементное сложение элементов первых двух массивов, и результат занести в третий массив.

/*
void fillArray (int a[], int n )
{
	for (int i = 0; i < n; i++)
		a[i] = 1 + rand() % 5;
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void plusArray(int a[], int b[], int c[], int n)
{
	for (int i = 0; i < n; i++)
		c[i] = a[i] + b[i];
}

int main()
{
	srand(time(NULL));
	int arr[5] = { 0 };
	int arr1[5] = { 0 };
	int arr2[5] = { 0 };
	//cout << binarySearch(arr, 9, 12);
	
		
	fillArray(arr, 5);
	fillArray(arr1, 5);
	plusArray(arr, arr1, arr2, 5);
	
	
	printArray(arr, 5);
	printArray(arr1, 5);
	printArray(arr2, 5);



	system("pause");
	return 0;
}
*/

// 18.	**Напишите функцию, которая принимает вещественное число и количество знаков и возвращает округленное число до указанного знака.

/*
double okrugleniye(double var, int n)
{
	var = double(int(var*pow(10, n) + 0.5)) / pow(10, n);
	return var;
}

int main()
{
	double x;
	int n;
	cin >> x >> n;
	cout << fixed << setprecision(n) << okrugleniye(x, n) << endl;

	system("pause");
	return 0;
}
*/

// 19.	*Напишите функцию, которая определяет количество нулевых элементов передаваемого массива. Реализовать перегрузки для различных типов массивов.

/*
void fillArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = 1 + rand() % 5;
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void printArray(double a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int nullArray(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			count++;
	
	return count;
}

int nullArray(double a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == 0)
			count++;

	return count;
}

int main()
{
	int arr[8] = { 0 };
	double arr1[5] = { 0, 2.1, 3.5, 4.7, 8.5 };
	
	srand(time(NULL));

	fillArray(arr, 5);
	
	printArray(arr, 8);
	cout << nullArray(arr, 8) << endl;

	printArray(arr1, 5);
	cout << nullArray(arr1, 5) << endl;
	

	system("pause");
	return 0;
}*/


// книга  Харви Дейтл  --- Как программировать на с++

//20.	*Напишите функцию, которая определяет количество  элементов передаваемого массива, которые больше определенного числа, 
//это число тоже передается в функцию.Реализовать перегрузки для различных типов массивов.

// 20 дом раб



// 23.	*Напишите функцию, которая определяет максимальный элемент массива(его значение и номер).Внутри функции запрещено использовать команды cin и cout.


void fillArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = 1 + rand() % 5;
}

void fillArray(char a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = char(rand()%57+65);
}

void printArray(char a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void printArray(double a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int minArr(int a[], int size, int &minIndex)
{
	int min = a[0];
	for(int i=0; i<size; i++)
		if (a[i] <= min)
		{
			min = a[i];
			minIndex = i;
		}
	return min;
}

char minArr(char c[], int size, int &minIndex)
{
	char min = c[0];
	for (int i = 0; i < size; i++)
		if (c[i] <= min)
		{
			min = c[i];
			minIndex = i;
		}
	return min;
}
int main()
{
	int arr[8] = { 0 }, minIndex;
	char c[10];
	double arr1[5] = { 0, 2.1, 3.5, 4.7, 8.5 };

	srand(time(NULL));

	//fillArray(arr, 8);
	fillArray(c, 10);

	//printArray(arr, 8);
	printArray(c, 10);

	//cout << minArr(arr, 8, minIndex) << endl;
	//cout << minIndex << endl;

	cout << minArr(c, 10, minIndex) << endl;
	cout << minIndex << endl;

	//cout << nullArray(arr, 8) << endl;

		
	system("pause");
	return 0;
}