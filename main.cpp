#pragma once
#include </Users/Amirsz/source/repos/�������������/�������������/och.h>
#include <conio.h>
#include "el.h"
using namespace std;
int main()
{
	int menu;
	och a; // ��������
	och copy;
	och subs;
	o_public pub;
	o_protected prot;
	o_private priv;
	int callback;
	int calltype;
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
			<< "7 � ����� �� ���������" << endl;
		cin >> menu;
		switch (menu)
		{
		case 7:
			return 0;
		case 1:
			a.put();
			break;
		case 2:
			a.cut();
			break;
		case 3:
			a.show();
			break;
		case 4:
			cout << "��� ������������?" << endl
				<< "1 - Public" << endl
				<< "2 - Protected" << endl
				<< "3 - Private" << endl;
			cin >> calltype;
			switch (calltype)
			{
			case 1:
				pub.setHead(a.getHead());
				pub.countEdit(a.num());
				pub.process();
				break;
			case 2:
				prot.set(a.getHead());
				prot.setNum(a.num());
				prot.process();
				break;
			case 3:
				priv.set(a.getHead());
				priv.setNum(a.num());
				priv.process();
				break;
			default:
				break;
			}
			break;
		case 5:
			a.copy(&copy);
			cout << "������� �� �� �����? 1/0" << endl;
			cin >> callback;
			if (callback)
			{
				copy.show();
			}
			break;
		case 6:
			subs.sub(&a,&copy);
			subs.show();
			break;
		default:
			break;
		}
	}
	system("pause");
}
