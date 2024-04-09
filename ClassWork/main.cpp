#include <iostream>
using namespace std;

#define TYPE_INFO(TypeName, Size, minValue, maxValue) \
	cout << "Тип данных '" << ##TypeName << "'занимает " << ##Size \
			 << " Байт памяти\nи принимает значения в диапазоне: \n"\
			 << ##TypeName << ": " << ##minValue << "..." << ##maxValue << ";" << "\n"
#define delimiter "\n--------------------------------------------------------\n"
//#define FLOATING_TYPES
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FLOATING_TYPES
	/*
TYPE_INFO("unsigned int", sizeof(unsigned int), 0, UINT_MAX);
TYPE_INFO("long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
TYPE_INFO("unsigned long long", sizeof(unsigned long long), 0, ULLONG_MAX);
TYPE_INFO("short", sizeof(short), SHRT_MIN, SHRT_MAX);
TYPE_INFO("unsigned short", sizeof(unsigned short), 0, USHRT_MAX);
TYPE_INFO("int", sizeof(int), INT_MIN, INT_MAX);*/
	cout << delimiter << endl;
	TYPE_INFO("float", sizeof(float), FLT_MIN, FLT_MAX);
	cout << delimiter << endl;
	TYPE_INFO("double", sizeof(double), DBL_MIN, DBL_MAX);
#endif 
}