#include "stdafx.h"
#include "function.cpp"

void removeWhiteSpace() {
	char* str = input();
	str = removeWhiteSpaceAtHead(str);
	str = removeWhiteSpaceAtTail(str);
	output(str);
	
}

char* removeWhiteSpaceAtHead(char *str) {
	while (str[0] == ' ' || str[0] == '\f' || str[0] == '\n' || str[0] == '\r' || str[0] == '\t' || str[0] == '\v') {
		for (int j = 0; j < strlen(str); j++) {
			str[j] = str[j + 1];
		}
	}
	return str;
}

char* removeWhiteSpaceAtTail(char *str) {
	int i = strlen(str) - 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v') {
		str[i] = '\0';
		i--;
	}
	return str;
}