#define _CRT_SECURE_NO_WARNINGS
#include "main.h"

char* task04(char* str, int& count) {
	char* result = new char[50];
	int size = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '[' || str[i] == ']') {
			result[size] = str[i];
			size++;
		}
	}

	result[size] = '\0';
	count = size;

	return result;
}