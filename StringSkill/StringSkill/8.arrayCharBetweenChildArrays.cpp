#include "stdafx.h"
#include "function.cpp"

void arrayCharBetweenChildArrays() {
	char parentStr[100] = "This is my teacher";
	cout << "Find in: " << parentStr << endl;
	cout << "Left String: " << endl;
	char *leftChildStr = input();
	
	cout << "Right String: " << endl;
	char *rightChildStr = input();

	char *resultStr = returnArrayCharBetweenChildArrays(parentStr, leftChildStr, rightChildStr);
	output(resultStr);
}

char* returnArrayCharBetweenChildArrays(char *parentStr, char *leftChildStr, char *rightChildStr) {
	int size = strlen(parentStr) - strlen(leftChildStr) - strlen(rightChildStr);
	char *resultStr = new char[size];
	resultStr = returnArrayCharBeforeChildArray(parentStr, rightChildStr);
	resultStr = returnArrayCharBehindChildArray(resultStr, leftChildStr);
	return resultStr;
}