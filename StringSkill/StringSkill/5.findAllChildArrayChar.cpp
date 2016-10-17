#include "stdafx.h"
#include "function.cpp"

void allChildArrayChar() {

	char parentStr[100] = "theeee are my teacher and my brother";
	cout << "Find in: " << parentStr << endl;
	char *childStr = input();
	int *listPlace = findAllChildArrayChar(parentStr, childStr);

	if (listPlace[0] < 0) {
		cout << "Not found!" << endl;
		system("pause");
		exit(0);
	}
	int i = 0;
	while(listPlace[i] >= 0){
		cout << listPlace[i] << " ";
		i++;
	}
}


int* findAllChildArrayChar(char *parentStr, char *childStr) {
	int *listPlace;
	listPlace = new int[strlen(parentStr)];
	int index = -1;											//index is index of listPlace[]
	
	int i = 0;
	while (parentStr[i] != '\0') {
		if (parentStr[i] == childStr[0]) {						// i is variable to approval each member of parentStr
			int j = 0;
			while (j < strlen(childStr)) {						// j is variable to compare childStr with parentStr
				if (parentStr[i + j] == childStr[j]) {
					j++;
				}
				else
					break;
			}
			if (j == strlen(childStr)) {
				index++;
				listPlace[index] = i;
			}
		}
		i++;
	}
	return listPlace;
}