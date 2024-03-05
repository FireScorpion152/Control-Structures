#include <iostream>

using namespace std;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1

void main() {
	setlocale(LC_ALL, "Russian");

#ifdef FACTORIAL
	int factorial1 = 1;
	int n;
	cout << "������� �����, ��������� �������� ����� ������" << endl; 
	cin >> n ;
	for (int i = 1; i <= n; i++) {
		factorial1 = factorial1 * i;
	}
	cout << factorial1;
#endif


#ifdef POWER
	int a;
	int n;
	int N = 1;
	cout << "������� ��������� �������:  "; cin >> a;
	cout << "������� ���������� �������:  "; cin >> n;
	for (int i = 0; i < n; i++) {
		N *= a;

	}
	cout << N << endl;
#endif // POWER


#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "������� ���������� �����:  "; cin >> n;
	int fibo1;
	int fibo2;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b) {
		cout << a << "\t";
	}
#endif // FIBONACCI_1
	
	int n;
	cout << "������� ���������� ����� ���������:  "; cin >> n;
	int a = 0, b = 1, c = a + b;
	for (int i = 0; i < n; i++) {
		a = b, b = c, c = a + b;
		cout << a << "\t";
	}
}