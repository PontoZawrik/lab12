#include "../../utils/utils/utils.h"
#include <Windows.h>
#include "main.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int p;

	do {
		cout << "Введите номер задания (-1 для выхода): ";
		cin >> p;

		switch (p) {
			case 1: primer(); break;
			case 2: task02(); break;
			case 3: task03(); break;


			case -1: cout << "Выход из программы.\n"; break;
			default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	system("pause");
	return 0;
}