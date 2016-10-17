#include "stdafx.h"
#include "function.cpp"

void stringToFloat() {
	char *str = input();
	float result = convertStringToFloat(str);
	cout << "Result is: " << result;
}


float convertStringToFloat(char *str) {
	float result;
	float naturePart, decimalPart;
	
	
	if (str[0] == '.') {
		//calculate nature part
		naturePart = 0;

		//calculate decimal part
		char* token = strtok(str, ".");
		if (token[0] < '0' || token[0] > '9' || !checkNumberOrText(token)) {
			cout << "input has character! ";
			system("pause");
			exit(0);
		}
		decimalPart = (int)token[(strlen(token) - 1)] - 48;
		decimalPart /= 10;
		for (int j = (strlen(token) - 2); j >= 0; j--) {
			decimalPart = decimalPart + (int)token[j] - 48;
			decimalPart /= 10;
		}
	}
	else {
		//calculate nature part
		char *token = strtok(str, ".");
		if (token[0] < '0' || token[0] > '9' || !checkNumberOrText(token)) {
			cout << "input is not a number! " << endl;
			system("pause");
			exit(0);
		}
		naturePart = (int)token[0] - 48;
		for (int j = 1; j < strlen(token); j++) {
			naturePart = naturePart * 10 + (int)token[j] - 48;
		}

		//calculate decimal part
		token = strtok(NULL, ".");
		if (token[0] < '0' || token[0] > '9' || !checkNumberOrText(token)) {
			cout << "input has character! ";
			system("pause");
			exit(0);
		}
		decimalPart = (int)token[(strlen(token) - 1)] - 48;
		decimalPart /= 10;
		for (int j = (strlen(token) - 2); j >= 0; j--) {
			decimalPart = decimalPart + (int)token[j] - 48;
			decimalPart /= 10;
		}
	}
	


	//calculate result and return
	result = naturePart + decimalPart;
	return result;
}