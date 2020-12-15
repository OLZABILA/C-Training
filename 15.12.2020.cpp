#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	/*
	int a=1, a1=1;
	for (; ;)
	{	a = a + a1;
		cout << a << "  ";
		a1 = a + a1;
		cout << a1 << "  ";
		break;
	}
	
	for (int a = 1, a1 = 2; a <= 3628800; a++)
	{
		a1 = a * a1;
		cout << a1 << "  ";
		break;
	}
    
	int a;
	cout << "2+2=? ";
	cin >> a;
	while (a == 4)
	{
		cout << "Good";
		break;
	}
	*/
	int a;
	cin >> a;
	cout << "Введите месяць года";
	switch (a)
	{
	case 1: case 2: case 12: cout << "зима"; break;
	case 3: case 4: case 5: cout << "весна"; break;
	case 6: case 7: case 8: cout << "лето"; break;
	case 9: case 10: case 11: cout << "Осень"; break;
	}
}