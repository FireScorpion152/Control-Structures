#include <iostream>

using namespace std;


//#define SIMPLEX_NUMBER
//#define MULTI_TABLE
//#define PIFAGOR_TABLE

void main() {
	setlocale(LC_ALL, "Russian");


#ifdef SIMPLEX_NUMBER
	int n;
	cout << "Введите предельное число для простых: "; cin >> n;
	int simplex_counter = 0;
	for (int i = 0; i <= n; i++) {
		bool simple = true;
		for(int j = 2; j<i/2; j++)
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		if (simple)simplex_counter++;
		//cout << (simplex_counter++, i) << "\t";
	}
	cout << endl;
	cout << "Количество простых чисел:" << simplex_counter << endl;
#endif // SIMPLEX_NUMBER

#ifdef MULTI_TABLE
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTI_TABLE
	
#ifdef PIFAGOR_TABLE
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i != 0 && j != 0) {
				cout << i * j << "\t";
			}
			else cout << "\t";
		}
		cout << endl;
	}
#endif // PIFAGOR_TABLE



}