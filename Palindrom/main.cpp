#include <iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "Russian");
    int n;
    cout << "������� ����� ��� ��������: ";  cin >> n;
    int check = 0;
    for (int i = n; i != 0; i /= 10) {
        check = check * 10 + i % 10;
    }
    if (check == n) {
        cout << "����� ���������" << endl;
    }else cout << "����� �� ���������" << endl;
    
	
}