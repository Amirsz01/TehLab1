#pragma once
#include </Users/Amirsz/source/repos/�������������/�������������/och.h>
#include <conio.h>
using namespace std;
int main()
{
	int menu;
	och* a = new o_public; // ��������
	och* copy = new o_public;
	och* subs = new o_public;
	int callback;
	setlocale(LC_ALL, "Russian");
	while(1)
	{
		system("CLS");
		cout << "1 � ���������� �������� �������" << endl
			<< "2 � ���������� �������� �������" << endl
			<< "3 � ����� ������� �� �����" << endl
			<< "4 � ���������� ���������� ��������" << endl
			<< "5 � �������� ����� �������" << endl
			<< "6 � ������� ������������ ������� � ������ � ����� ���������� �� �����" << endl
			<< "7 � ����� �� ���������" << endl
			<< "8 - ��������� ������������" << endl;
		cin >> menu;
		switch (menu)
		{
		case 7:
			return 0;
		case 1:
			a->put();
			break;
		case 2:
			a->cut();
			break;
		case 3:
			a->show();
			break;
		case 4:
			a->process();
			break;
		case 5:
			a->copy(copy);
			cout << "������� �� �� �����? 1/0" << endl;
			cin >> callback;
			if (callback)
			{
				copy->show();
			}
			break;
		case 6:
			subs->sub(a,copy);
			subs->show();
			break;
		case 8:
			cout << "�������� ��� ������������ (public - 0, protected - 1, private - 2)" << endl;
			delete a;
			a = 0;
			for (;;)
			{
				switch (_getch())
				{
				case '0':
					a = new o_public;
					cout << "������ public" << endl;
					break;
				case '1':
					a = o_protected::return_ptr();
					cout << "������ protected" << endl;
					break;
				case '2':
					a = o_private::return_ptr();
					cout << "������ private" << endl;
					break;
				default:
					cout << "������ �� ���������� ���!!!" << endl;
					cout << "�������� ������ ���" << endl;
				}
				if (a != NULL)
					break;
			}
			cout << "����� ���� ������ �������" << endl;
			system("pause");
			break;
		default:
			break;
		}
	}
	system("pause");
}
