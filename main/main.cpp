#include <iostream>
#include <conio.h>
using namespace std;

#define Escape 27
#define Enter 13
#define UpArrow 80
#define DownArrow 72
#define LeftArrow 75
#define RightArrow 77
//#define Shooter_1
#define Shooter_2

int main()
{
	setlocale(LC_ALL, "russian");
	char key;

#ifdef Shooter_1	
	do {
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == '�' || key == '�' || key == UpArrow)cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == '�' || key == '�' || key == DownArrow)cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == '�' || key == '�' || key == LeftArrow)cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == '�' || key == '�' || key == RightArrow)cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if (key == Enter)cout << "�����" << endl;
		else if (key != Escape && key != -32)cout << "Error" << endl;
	} while (key != 27);
#endif // Shooter_1

#ifdef Shooter_2	
	
	do {
		key = _getch();
		/*cout << (int)key << "\t" << key << endl;*/
		switch (key) {
		case 'w':
		case 'W':
		case UpArrow:cout << "Forward" << endl;		break;
		case 's':
		case 'S':
		case DownArrow:cout << "Back" << endl;		break;
		case 'a':
		case 'A':
		case LeftArrow:cout << "Left" << endl;		break;
		case 'd':
		case 'D':
		case RightArrow:cout << "Right" << endl;	break;
		case Enter:cout << "Shoot" << endl;			break;
		case ' ':cout << "Jump" << endl;			break;
	/*	case '�':cout << "Forward" << endl; break;
		case '�':cout << "Forward" << endl; break;
		case '�':cout << "Back" << endl; break;
		case '�':cout << "Back" << endl; break;
		case '�':cout << "Left" << endl; break;
		case '�':cout << "Left" << endl; break;
		case '�':cout << "Right" << endl; break;
		case '�':cout << "Right" << endl; break;*/
		case Escape:cout << "Exit" << endl;
		case -32: break;
		default: cout << "Error" << endl;			break;
		}
	} while (key != Escape);
#endif // Shooter_2

}
