#include <iostream>
using namespace std;
/*
int main()
{
	
int a;
cout << "2+2=?" << endl;
cin >> a;
if (a == 2)
{
	cout << "правельно +";
}
else
{
	cout << "не правельно -";
}
-----------------------------------------
/*char a[255] = "Hi";
char b[255] = "boy";
cout << a << endl;// hi
strcat(a, b);
cout << a << endl;// hi boy
---------------------------------------- или 
* /
	string a = "hi";
	string b = "world";
	string c;
	 c = a + b;
}
*/
/*int main()
{
	setlocale(LC_ALL, "Ru");
char a[255] = "Hi";
char b[255] = "boy";
cout << a << endl;// hi
strcat(a, b);
cout << a << endl;// hi boy
---------------------------------------- 

	cout << "Ведите имя и фамилию\n";
	cout << "Имя ";
	string a ;
	cin >> a;
	cout << endl << "Фамилия";
	string b;
	cin >> b;
	string c;
	 c = a + b;
	 cout << "приятно познакомится " << c;
}
*/
int main()
{
	setlocale(LC_ALL, "Ru");
	int a;
	cout << "Введите температуру на улице (от -30 до 30)";
	cin >> a;
	if (a>=-30&&a<=15)
	{
		cout << " На улице холодно ";
	}
	else
	{
		if (a >=16 && a <= 30 )
		{
			cout << "на улице тепло";
		}
	}
}
