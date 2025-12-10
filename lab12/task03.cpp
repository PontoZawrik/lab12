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

		case 2: {
			char str[] = "So she was considering in her own mind, as well as she could, for the hot day made her feel very sleepy and stupid, whether the pleasure of making a daisy - chain would be worth the trouble of getting up and picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her.";
			
			char d[] = " .,!?;:()-";
			char* p = strtok(str, d);

			unsigned count = 0;

			char* t = NULL;
			unsigned tSize = 100000;


			char arr1[100][50];
			unsigned size1 = 0;
			bool flag1 = true;

			char arr2[50][50];
			unsigned size2 = 0;
			bool flag2 = true;


			while (p != NULL) {
				if (strlen(p) % 2 == 0) {
					cout << p << endl;
				}

				if (p[0] == 'a' && strlen(p) < tSize) {
					t = p;
					tSize = strlen(t);
				}

				for (int i = 0; i < size1; i++) {
					if (!strcmp(arr1[i], p)) {
						flag1 = false;

						for (int j = 0; j < size2; j++) {
							if (!strcmp(arr2[j], p)) {
								flag2 = false;
								break;
							}
						}

						if (flag2) {
							strcpy(arr2[size2], p);
							size2++;
						}
						flag2 = true;
						break;
					}
				}
				if (flag1) {
					strcpy(arr1[size1], p);
					size1++;
				}
				flag1 = true;

				p = strtok(NULL, d);
				count++;
			}

			cout << "Количество слов в строке: " << count << endl;
			cout << "\nСамое короткое слово на букву \'а\': " << t << endl;

			cout << "Повторяющиеся слова:" << endl;
			for (int i = 0; i < size2; i++) {
				cout << arr2[i] << endl;
			}
		} break;


		case -1: cout << "Выход из подпрограммы.\n"; break;
		default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	return;
}

