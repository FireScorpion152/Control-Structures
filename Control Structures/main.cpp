#include <iostream>
#include <conio.h>
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch(); // Функция _getch() ожидает нажатия клавиши и возвращает ASCII код. Этот ASCII код мы присваиваем переменной key.
						// Функция _getch() находится в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
	} while (true);
}