#include <iostream>
#include <time.h>
using namespace std;

void Show(int* r, const int a)
{
	for (int i = 0; i < a; i++)
	{
		r[i] = 4 + rand() % (68 - 4) + 1;
	}
}

void Print(int* r, const int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << r[i] << ",";
	}
}

int Number(int* r, const int a)
{
	int k = 0;
	for (int i = 0; i < a; i++)
	{
		if (r[i] % 2 != 0 || r[i] % 13 != 0)
		{
			k++;
		}
	}
	return k;
}

int Sum(int* r, const int a)
{
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		if (r[i] % 2 != 0 || r[i] % 13 != 0)
		{
			sum += r[i];

		}
	}
	return sum;

}

void Zamina(int* r, const int a)
{
	for (int i = 0; i < a; i++)
	{
		if (r[i] % 2 != 0 || r[i] % 13 != 0)
		{
			r[i] = 0;

		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	const int a = 23;
	int r[a];
	Show(r, a);
	cout << "r {"; Print(r, a); cout << "}" << endl;
	cout << "Number = " << Number(r, a) << endl;
	cout << "Sum = " << Sum(r, a) << endl;
	Zamina(r, a);
	cout << "r {"; Print(r, a); cout << "}" << endl;
	return 0;

}









