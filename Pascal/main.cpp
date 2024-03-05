#include <iostream>

using namespace std;
typedef unsigned long long int DataType; //Директива typedef создаёт псевдоним для существующего типа данных

const int width = 8;
void main() {
	int i, h, n;
	cout << "Введите высоту треугольника: "; cin >> h;
	for (i = 0; i < h; i++) {
		cout.width(width / 2);
		cout << "";
	}
	cout << left;
	cout << 1 << endl;
	DataType nf = 1;
	for (n = 1; n <= h; n++) {
		nf *= n;
		DataType mf = 1;
		for (int i = 0; i < h - n; i++) {
			cout.width(width / 2);
			cout << "";
		}
		cout.width(width);
		cout << 1;
		for (int m = 1; m <= n; m++) {
			mf *= m;
			DataType nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)nmf *= nm;
			cout.width(width);
			cout << nf / mf / nmf;
		}
		cout << endl;

	}
}