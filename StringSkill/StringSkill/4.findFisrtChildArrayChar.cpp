#include "stdafx.h"
#include "function.cpp"

void firstChildArrayChar() {
	char parentStr[100] = "This is my teacher";
	cout << "Find in: " << parentStr << endl;
	char *str = input();
	int fisrtPlace = findFirstChildArrayChar(parentStr, str);
	cout << "Result is: " << fisrtPlace << endl;
}

int findFirstChildArrayChar(char *parentStr, char *childStr) {
	char *resultStr = strstr(parentStr, childStr);
	if (resultStr == NULL) {
		cout << "Not found!" << endl;
		system("pause");
		exit(0);
	}
	else
		return strlen(parentStr) - strlen(resultStr);
}


