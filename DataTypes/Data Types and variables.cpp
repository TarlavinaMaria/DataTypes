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
	cout << "�������������� ����� � �������� ������\n"; // rub. - ����� �����, cop. - ������� �����.
	double number;
	cout << "������� ������� ����� "; cin >> number;
	int rub = trunc(number);
	double cop = (number - rub) * 100;
	cout << number << " ���. - ��� " << rub << " ���. " << cop << " ���.";
#endif

#if defined Task2
	cout << "���������� ��������� �������\n";
	cout << "������� �������� ������:\n";
	double notebook_price; //���� �������
	int notebook; //���-�� ��������
	double pencil_price; //���� ���������
	int pencil; //���-�� ����������
	cout << "���� ������� (���.) "; cin >> notebook_price;
	cout << "���������� �������� "; cin >> notebook;
	cout << "���� ��������� (���.) "; cin >> pencil_price;
	cout << "���������� ���������� "; cin >> pencil;
	double sum = (notebook_price * notebook) + (pencil_price * pencil);
	cout << "��������� �������: " << sum << " ���.";
#endif

#if defined Task3
	cout << "���������� ��������� �������\n";
	cout << "������� �������� ������:\n";
	double notebook_price; //���� �������
	int notebook; //���-�� ����������
	double cover; // ���� �������
	cout << "���� ������� (���.) "; cin >> notebook_price;
	cout << "���� ������� (���.) "; cin >> cover;
	cout << "���������� ���������� "; cin >> notebook;
	double sum = (notebook_price * notebook) + (cover * notebook);
	cout << "��������� �������: " << sum << " ���.";
#endif

#if defined Task4
	cout << "���������� ��������� ������� �� ���� � �������.\n";
	int kilometers; // ���������
	cout << "��������� �� ���� (��.) "; cin >> kilometers;
	double petrol_quantity; // ������
	cout << "������ ������� (������ �� 100 ��. �������) "; cin >> petrol_quantity;
	double gasoline_price; // ���� �������
	cout << "���� ����� ������� (���.) "; cin >> gasoline_price;
	double price = ((kilometers * petrol_quantity) / 100) * gasoline_price * 2;
	cout << "���� ����� ������� �� ���� � ������� ��������� � " << round(price) << " ���.";
#endif
}