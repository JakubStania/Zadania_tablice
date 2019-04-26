#include <iostream>
using namespace std;
#define N 7
#define M 8
int a[N];
int b[M] = { 2,4,0,9,2,0,0,1 };
void Wpisz()
{
	int i;
	for (int i = 0; i < N; i++)
	{
		cout << "liczba " << i + 1 << endl;
		cin >> a[i];
	}
}
void WczytajDane()
{
	cout << a[M];
}
int main()
{
	cout << "Witaj w programie do uzupelniania tablicy!" << endl;
	cout << "Podaj 7 liczb, kazda potwierdz naciskajac Enter" << endl;
	Wpisz();
	cout << "Wiesz, ze tworca urodzil sie w: " << endl;
	WczytajDane();
	cout << "" << endl;
	cout << "Nacisnij dowolny znak, aby zakonczyc dzialanie programu" << endl;
}

