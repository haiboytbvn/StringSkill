#include "stdafx.h"
#include "function.cpp"

void standardize() {
	char *str = input();
	str = removeWhiteSpaceAtHead(str);
	str = removeWhiteSpaceAtTail(str);
	str = removeWhiteSpaceBetweenWord(str);
	str = lowerAllLetter(str);
	str = upperFirstLetterOfWord(str);
	output(str);
}



char* removeWhiteSpaceBetweenWord(char *str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ' ' && str[i + 1] == ' ') {
			for (int j = i; j < strlen(str); j++) {
				str[j] = str[j + 1];
			}
			i--;
		}
		i++;
	}
	return str;
}

char* lowerAllLetter(char *str) {
	int i = 0;
	while (str[i] != '\0') {
		str[i] = tolower(str[i]);
		i++;
	}
	return str;
}

char* upperFirstLetterOfWord(char *str) {
	int i = 0;
	str[0] = toupper(str[0]);
	while (str[i] != '\0') {
		if (str[i] == ' ' && str[i + 1] != ' ') {
			str[i + 1] = toupper(str[i + 1]);
		}
		i++;
	}
	return str;
}