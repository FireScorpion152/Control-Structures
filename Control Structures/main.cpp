#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch(); // ������� _getch() ������� ������� ������� � ���������� ASCII ���. ���� ASCII ��� �� ����������� ���������� key.
						// ������� _getch() ��������� � ���������� <conio.h>
		cout << (int)key << "\t" << key << endl;
	} while (true);
}