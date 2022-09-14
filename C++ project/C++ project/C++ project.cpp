#include<Windows.h>
#include<iostream>
#include<stdio.h>
#include<cmath>
#include<conio.h>

using namespace std;
int main()
{
	double f, t, a, b;
	a = 1.3;
	b = -0.5;

	setlocale(0, "");
	cout << ("введите t: ");
	cin >> t;

	
	if (t <= 1)
	{
		f = a * pow(t, 2) - b * sqrt(t + 1);
		cout << f << endl;
	}
	else if(1 < t && t <= 2)
	{
		f = a - b;
		cout << f << endl;
	}
	else if(t == 2.3)
	{
		f = a * pow(t, (2 / 3)) - pow(b, 3) * sqrt(t + 1);
		cout << f << endl;
	}
	else if(t > 2.3 && t < 3)
	{
		f = pow(t, (a * b));
		cout << f << endl;
	}
	else
		cout << ("нет решения") << endl;



	return 0;
}
