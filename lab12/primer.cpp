#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include "main.h"

void primer() {
	srand(time(NULL));

	cout << "Печать кодов ASCII и символов:\n";
	for (unsigned a = 0; a < 256; a++) {
		cout << a << '\t' << (char)a << endl;
	}

	const unsigned size = 1000;
	char mas[size];

	cout << "\nГенерация случайных символов:\n";
	for (unsigned i = 0; i < size; i++) {
		mas[i] = (char)(rand() % 256);
		cout << mas[i] << ' ';
	}

	cout << "\n\nГенерация ЗАГЛАВНЫХ английских букв:\n";
	for (unsigned i = 0; i < size; i++) {
		mas[i] = (char)(65 + rand() % (90 - 65 + 1));
		cout << mas[i] << ' ';
	}


	cout << "\n\nГенерация текста из английских букв:\n";
	mas[0] = '\t';
	mas[1] = (char)(65 + rand() % (90 - 65 + 1));

	for (unsigned i = 2; i < 998; i++) {
		if (rand() % 17 == 0 && i != 2) {
			mas[i] = (char)(65 + rand() % (90 - 65 + 1));
			mas[i - 1] = ' ';
			mas[i - 2] = '.';
		}
		else if (rand() % 7 == 0 && mas[i - 1] != ' ') {
			mas[i] = ' ';
		}
		else {
			mas[i] = (char)(97 + rand() % (122 - 97 + 1));
		}
	}
	mas[998] = '.';
	mas[999] = '\0';

	cout << mas << endl << endl;


	char s[] = "I am going to school now. The sun is shining! Is it temperature cold? future - unknowing...";
	cout << s << endl;

	char d[] = " .,!?;:()-";
	char* p = strtok(s, d);

	while (p != NULL) {
		cout << p << endl;
		p = strtok(NULL, d);
	}
	cout << "\nВ изначальной строке осталось:\n" << s << endl;

	char* s0 = new char[100];
	char* s1 = new char[50];

	cout << "\nВведите текст:\n";
	cin.ignore();
	gets_s(s0, 100);
	cout << s0 << endl;

	cout << "\nВведите искомую подстроку (слова):\n";
	gets_s(s1, 50);
	cout << s1 << endl;

	if (strstr(s0, s1) != NULL) {
		cout << "Есть подстрока " << s1 << " в строке: " << s0 << endl;
	}
	else {
		cout << "Подстроки " << s1 << " нет в строке: " << s0 << endl;
	}

	return;
}