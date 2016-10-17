#include "stdafx.h"
#include "function.cpp"

void arrayCharBeforeChildArray() {
	char parentStr[100] = "This is my teacher";
	cout << "Find in: " << parentStr << endl;
	char *childStr = input();
	char *resultStr = returnArrayCharBeforeChildArray(parentStr, childStr);
	output(resultStr);
}


char* returnArrayCharBeforeChildArray(char *parentStr, char *childStr) {

	int index = findFirstChildArrayChar(parentStr, childStr);
	int size = index;
	char *resultStr = new char[size];
	int i = 0;
	for (i = 0; i < size; i++) {
		resultStr[i] = parentStr[i];
	}
	resultStr[i] = '\0';
	return resultStr;
}
