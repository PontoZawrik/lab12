#define _CRT_SECURE_NO_WARNINGS
#include "main.h"

void task03() {
	int p;

	do {
		cout << "Введите номер подзадания (-1 для выхода): ";
		cin >> p;

		switch (p) {
		case 1: {
			char str[100];

			cout << "\nВведите текст: ";
			cin.ignore();
			cin.getline(str, 100);

			bool flag = true;

			for (int i = 0; str[i] != '\0'; i++) {
				if (!isxdigit(str[i])) {
					flag = false;
					break;
				}
			}

			if (flag) {
				cout << "Cтрока \"" << str << "\" явялется шестнадцатеричным числом." << endl;
			}
			else {
				cout << "Cтрока \"" << str << "\" не явялется шестнадцатеричным числом." << endl;
			}
		} break;


		case -1: cout << "Выход из подпрограммы.\n"; break;
		default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	return;
}

