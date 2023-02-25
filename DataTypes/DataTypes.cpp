#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define LOGICAL_TYPES
//#define DATA_TYPES
//#define DECLARATION_AND_INITIALISATION
//#define COFFEE
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Привет DataTypes\n";
#if defined LOGICAL_TYPES
	cout << true << endl;
	cout << false << endl;
	cout << (bool) -0.0000000001 << endl;
#endif
#if defined DATA_TYPES
	cout << "long long: \n";
	cout << sizeof(long long) << endl;
	cout << " signed long long:" << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << " insigned long long:" << 0 << " ... " << ULLONG_MAX << endl;
	cout << "\n----------------------------------------------------\n";

	cout << "float^\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << "\n----------------------------------------------------\n";

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif
#if defined DECLARATION_AND_INITIALISATION
	cout << price_of_coffe << endl;
#endif
#if defined COFFEE
	double price_of_coffe;
	int number_of_cups;
	cout << "Введите стоимость кофе: "; cin >> price_of_coffe;
	cout << "Введите количество чашек: "; cin >> number_of_cups;
	double total_price = price_of_coffe * number_of_cups;
	cout << "Общая стоимость: " << total_price << endl;
#endif

	int speed = 0;
	const int MAX_SPEED = 250;
	cout << 5 << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
}