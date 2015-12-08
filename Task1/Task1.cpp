#include <iostream>
using namespace std;

void RandomArray(int a[], int n);
void DisplayArray(int[], int);
void Swap(int[], int[]);
void SortExchange(int[], int);
int EnterDimention(int);

int main()
{
	while (true)
	{

		const int N = 100;
		int a[N] = { 0 };
		int n = EnterDimention(N);
		RandomArray(a, n);
		cout << "Source array: " << endl;
		DisplayArray(a, n);
		SortExchange(a, n);
		cout << endl << "SortedArray: " << endl;
		DisplayArray(a, n);
		system("pause");
		system("cls");

		char yes;
		cout << "Would you like to countinie? Press y/Y: " << endl;
		cin >> yes;
		if (yes == 'y' || yes == 'Y')
			continue;
		break;
	}
	return 0;
}


void RandomArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 200 - 100;
}
void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ", ";
}

void Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
void SortExchange(int a[], int n)
{

	for (int i = 1; i <= n - 1; i++)
	for (int j = n - 1; j >= 1; j--)
	if (abs(a[j] % 10) < abs(a[j - 1] % 10)) Swap(a[j], a[j - 1]);
}

int EnterDimention(int n)
{
	int k;
	while (true)
	{
		cout << "Enter the amount of elements (n <= 100): ";
		cin >> k;
		if (k > 0 && k <= n) return k; //n=N, n=k
		cout << "Error! Try again...";
	}

}
