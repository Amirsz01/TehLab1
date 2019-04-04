#pragma once
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд/och.h>
#include <conio.h>
using namespace std;
int main()
{
	int menu;
	och* a = new o_public; // Оригинал
	och* copy = new o_public;
	och* subs = new o_public;
	int callback;
	setlocale(LC_ALL, "Russian");
	while(1)
	{
		system("CLS");
		cout << "1 – Добавление элемента очереди" << endl
			<< "2 – Извлечение элемента очереди" << endl
			<< "3 – Вывод очереди на экран" << endl
			<< "4 – Вычисление требуемого значения" << endl
			<< "5 – Создание копии очереди" << endl
			<< "6 – Слияние оригинальной очереди с копией и вывод результата на экран" << endl
			<< "7 – Выход из программы" << endl
			<< "8 - Изменение наследования" << endl;
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
			cout << "Вывести ее на экран? 1/0" << endl;
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
			cout << "Выберите тип наследования (public - 0, protected - 1, private - 2)" << endl;
			delete a;
			a = 0;
			for (;;)
			{
				switch (_getch())
				{
				case '0':
					a = new o_public;
					cout << "Выбран public" << endl;
					break;
				case '1':
					a = o_protected::return_ptr();
					cout << "Выбран protected" << endl;
					break;
				case '2':
					a = o_private::return_ptr();
					cout << "Выбран private" << endl;
					break;
				default:
					cout << "Выбран не правильный тип!!!" << endl;
					cout << "Выберите другой тип" << endl;
				}
				if (a != NULL)
					break;
			}
			cout << "Смена типа прошла успешно" << endl;
			system("pause");
			break;
		default:
			break;
		}
	}
	system("pause");
}
