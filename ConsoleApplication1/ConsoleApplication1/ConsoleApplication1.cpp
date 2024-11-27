// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double zad1(double a, double b, double c) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
void zad3(int n) {
	for (int i = 0, j = 2; i < n; i++, j*=2) {
		cout << j << " ";
	}
	cout << endl;
}
int zad4() {
	int sum = 0;
	for (int i = 0; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}
void zad5()
{
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;

	if (a >= 0 && a <= 15) {
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= i; j++) {
				cout << "@";
			}
			cout << endl;
		}
	}
}
double zad6(){
	int x, sum = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Podaj liczbe: ";
		cin >> x;
		sum += x;

	}
	return sum / 5;
}
void zad7(int n) {
	cout << "Podaj " << n << " liczb: " << endl;
	int c = 0, sum = 0, a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a % 3 == 0)
		{
			c++;
			sum += a;
		}
	}
	cout << "Ilosc liczb podzielnych przez 3: " << c << " Suma liczb podzielnych przez 3: " << sum <<  endl;
}
void zad8(int n){
	for (int i = 2; i <= n; i += 2)
		if (i % 4 == 0)
			cout << i << " ";
}
int main()
{
	cout << zad1(3, 4, 5) << endl;
	zad3(3);
	cout << zad4() << endl;
	zad5();

	cout << zad6() << endl;

	zad7(3);
	zad8(16);
}

