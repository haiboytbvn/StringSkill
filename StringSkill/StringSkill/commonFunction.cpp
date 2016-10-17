#include "stdafx.h"
#include "function.cpp"


char *input() {
	char *str;
	str = new char[100];	
	
	cout << "input a string: ";
	cin.get(str, 100);
	cin.ignore();
	if (str[0] == '\0') {
		cout << "there is no input string!" << endl;
		system("pause");
		exit(0);
	}
	return str;
}

void output(char *str) {
	cout << "Result is: \"";
	cout << str;
	cout << "\"" <<endl;
}


//string inputString() {
//
//	/*char *newString;
//	newString = new char[100];
//	cin >> newString;*/
//
//	cout << "input a string: ";
//	string newString;
//	getline(cin, newString);
//	if (newString.empty()) {
//		cout << "this string is NULL!" << endl;
//		return 0;
//	}
//	else {
//		return newString;
//	}
//	fflush(stdin);
//}
//
//void outputString(string str) {
//	cout << "Result is: " << str << endl;
//}