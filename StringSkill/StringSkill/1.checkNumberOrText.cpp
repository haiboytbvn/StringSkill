#include "stdafx.h"
#include "function.cpp"

void numberOrText() {
	
	char *str = input();
	if (checkNumberOrText(str))
		cout << "true";
	else
		cout << "false";
}

bool checkNumberOrText(char *str) {

	int i=0;
	
	while (!isNumber(str[i])) {
		i++;
	}
	
	if (i == (strlen(str))) 
		return true;
	else
		return false;
}

bool isNumber(char c) {
	if (c >= '0' && c <= '9')
		return true;
	else return false;
}