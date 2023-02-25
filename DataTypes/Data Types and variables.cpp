#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define Task1
//#define Task2
//#define Task3
//#define Task4

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined Task1
	cout << "Преобразование числа в денежный формат\n"; // rub. - целая часть, cop. - дробная часть.
	double number;
	cout << "Введите дробное число "; cin >> number;
	int rub = trunc(number);
	double cop = (number - rub) * 100;
	cout << number << " грн. - это " << rub << " грн. " << cop << " коп.";
#endif

#if defined Task2
	cout << "Вычисление стоимости покупки\n";
	cout << "Введите исходные данные:\n";
	double notebook_price; //Цена тетради
	int notebook; //Кол-во тетрадей
	double pencil_price; //Цена карандаша
	int pencil; //Кол-во карандашей
	cout << "Цена тетради (грн.) "; cin >> notebook_price;
	cout << "Количество тетрадей "; cin >> notebook;
	cout << "Цена карандаша (грн.) "; cin >> pencil_price;
	cout << "Количество карандашей "; cin >> pencil;
	double sum = (notebook_price * notebook) + (pencil_price * pencil);
	cout << "Стоимость покупки: " << sum << " грн.";
#endif

#if defined Task3
	cout << "Вычисление стоимости покупки\n";
	cout << "Введите исходные данные:\n";
	double notebook_price; //Цена тетради
	int notebook; //Кол-во комплектов
	double cover; // Цена обложки
	cout << "Цена тетради (грн.) "; cin >> notebook_price;
	cout << "Цена обложки (грн.) "; cin >> cover;
	cout << "Количество комплектов "; cin >> notebook;
	double sum = (notebook_price * notebook) + (cover * notebook);
	cout << "Стоимость покупки: " << sum << " грн.";
#endif

#if defined Task4
	cout << "Вычисление стоимости поездки на дачу и обратно.\n";
	int kilometers; // растояние
	cout << "Растояние до дачи (км.) "; cin >> kilometers;
	double petrol_quantity; // расход
	cout << "Расход бензина (литров на 100 км. пробега) "; cin >> petrol_quantity;
	double gasoline_price; // цена бензина
	cout << "Цена литра бензина (грн.) "; cin >> gasoline_price;
	double price = ((kilometers * petrol_quantity) / 100) * gasoline_price * 2;
	cout << "Цена литра бензина на дачу и обратно обойдется в " << round(price) << " грн.";
#endif
}