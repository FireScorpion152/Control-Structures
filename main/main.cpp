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
		if (key == 'w' || key == 'W' || key == 'ц' || key == 'Ц' || key == UpArrow)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == 'ы' || key == 'Ы' || key == DownArrow)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == 'ф' || key == 'Ф' || key == LeftArrow)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == 'в' || key == 'В' || key == RightArrow)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == Enter)cout << "Огонь" << endl;
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
	/*	case 'ц':cout << "Forward" << endl; break;
		case 'Ц':cout << "Forward" << endl; break;
		case 'ы':cout << "Back" << endl; break;
		case 'Ы':cout << "Back" << endl; break;
		case 'ф':cout << "Left" << endl; break;
		case 'Ф':cout << "Left" << endl; break;
		case 'в':cout << "Right" << endl; break;
		case 'В':cout << "Right" << endl; break;*/
		case Escape:cout << "Exit" << endl;
		case -32: break;
		default: cout << "Error" << endl;			break;
		}
	} while (key != Escape);
#endif // Shooter_2

}
