#include <iostream>
#include <conio.h>
using namespace std;
#define CALC1
#define SWITCH
int main() {
	setlocale(LC_ALL, "Russian");

	double a, b;
	char s;


	cout << "¬ведите выражение: "; cin >> a >> s >> b;
#ifdef CALC1
	if (s == '+') {
		cout << a << '+' << b << "=" << a + b << endl;
	}
	else if (s == '-') {
		cout << a << '-' << b << "=" << a - b << endl;
	}
	else if (s == '*') {
		cout << a << '*' << b << "=" << a * b << endl;
	}
	else if (s == '/') {
		cout << a << '/' << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
#endif // CALC1

#ifdef Switch
	switch (s)
	{
	case '+': cout << a << "+" << b << a + b << endl; break;
	case '-': cout << a << "-" << b << a - b << endl; break;
	case '*': cout << a << "*" << b << a * b << endl; break;
	case '/': cout << a << "/" << b << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
	main();
#endif
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
}