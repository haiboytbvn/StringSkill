#include "stdafx.h"
#include "function.cpp"

void mergeArrayChar() {

	char *resultStr = input();
	cout << endl;
	char nextStr[100];
	while (true)
	{
		
		cout << "input next string: ";
		cin.get(nextStr, 100);
		cin.ignore();
		if (nextStr[0] == '\0') {
			
			cout << "Finish !";
			break;
		}
		resultStr = strcat(resultStr, nextStr);
		cout << endl << "To finish, Enter !" << endl;
	}	
	output(resultStr);
}


//char* str_cat(char *s1, char *s2) {
//	int size = strlen(s1) + strlen(s2);
//	char *mergedStr = new char[size];
//	int i=0;
//	while (i < size) {
//		if (i < strlen(s1)) {
//			mergedStr[i] = s1[i];
//		}
//		mergedStr[i + strlen(s1)] = s2[i];
//		i++;
//	}
//	mergedStr[size] = '\0';
//	return mergedStr;
//}