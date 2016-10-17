#include "stdafx.h"
#include "function.cpp"

void arrayCharBehindChildArray() {
	char parentStr[100] = "This is my teacher";
	cout << "Find in: " << parentStr << endl;
	char *childStr = input();
	char *resultStr = returnArrayCharBehindChildArray(parentStr, childStr);
	output(resultStr);
}


char* returnArrayCharBehindChildArray(char *parentStr, char *childStr) {
	
	int index = findFirstChildArrayChar(parentStr, childStr);
	int size = strlen(parentStr) - index - strlen(childStr);
	char *resultStr = new char[size];
	int i = 0;
	for (i = 0; i < size; i++) {
		resultStr[i] = parentStr[i+index+strlen(childStr)];
	}
	resultStr[i] = '\0';
	return resultStr;
}
