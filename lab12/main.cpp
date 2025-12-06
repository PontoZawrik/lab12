#include "../../utils/utils/utils.h"
#include "main.h"

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));


	int p;

	do {
		cout << "Введите номер задания (-1 для выхода): ";
		cin >> p;

		switch (p) {
			case 1: primer(); break;


			case -1: cout << "Выход из программы.\n"; break;
			default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	system("pause");
	return 0;
}