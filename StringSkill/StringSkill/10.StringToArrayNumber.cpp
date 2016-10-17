#include "stdafx.h"
#include "function.cpp"

void stringToArrayNumber() {
	char *str = input();
	int *listNumber;

	listNumber = convertStringToArrayNumber(str);
	int i = 0;
	while (listNumber[i] >= 0) {
		cout << listNumber[i] << " ";
		i++;
	}
}

int* convertStringToArrayNumber(char *str) {
	int size = strlen(str);
	int *listNumber = new int[100];
	int i = 0;
	char *token = strtok(str, " ");

	while (token != NULL) {
		if (token[0] < '0' || token[0] > '9' || !checkNumberOrText(token)) {
			cout << "input has character! ";
			system("pause");
			exit(0);
		}
		listNumber[i] = (int)token[0] - 48;
		for (int j = 1; j < strlen(token); j++) {
			listNumber[i] = listNumber[i] * 10 + (int)token[j] - 48;
		}

		i++;
		token = strtok(NULL, " ");
	}
	return listNumber;
}