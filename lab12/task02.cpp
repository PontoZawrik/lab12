#define _CRT_SECURE_NO_WARNINGS
#include "main.h"

void task02() {
	int p;

	do {
		cout << "Введите номер подзадания (-1 для выхода): ";
		cin >> p;

		switch (p) {
			case 1: {
				char str[100];
				char search[50];

				cout << "\nВведите текст: ";
				cin.ignore();
				cin.getline(str, 100);

				cout << "Введите искомую подстроку: ";
				cin.getline(search, 50);

				if (strstr(str, search)) {
					cout << "Есть подстрока " << search << " в строке: " << str << endl;
				}
				else {
					cout << "Подстроки " << search << " нет в строке: " << str << endl;
				}
			} break;

			case 2: {
				char str[100];
				char sep[20];

				cout << "\nВведите текст: ";
				cin.ignore();
				cin.getline(str, 100);

				cout << "Введите разделитель: ";
				cin.getline(sep, 20);

				char* p = strtok(str, sep);

				while (p != NULL) {
					cout << p << endl;
					p = strtok(NULL, sep);
				}
			} break;


			case -1: cout << "Выход из подпрограммы.\n"; break;
			default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	return;
}

