#include <iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число для проверки: ";  cin >> n;
    int check = 0;
    for (int i = n; i != 0; i /= 10) {
        check = check * 10 + i % 10;
    }
    if (check == n) {
        cout << "Число палиндром" << endl;
    }else cout << "Число не палиндром" << endl;
    
	
}
