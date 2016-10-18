#include "stdafx.h"
#include "function.cpp"

void mergeArrayChar() {
	char *val;
	val = str_cat("Hello", " world!", " I", " am", " a", " student", (char*)NULL);
	cout << val << endl;
}


char* str_cat(const char *str, ...)
{
	va_list listChar;
	char *resultStr, *parameter;
	int sizeResult = 0;

	if (str == NULL)
		return NULL;

	sizeResult = strlen(str);
	va_start(listChar, str);

	while ((parameter = va_arg(listChar, char *)) != NULL)
		sizeResult += strlen(parameter);

	va_end(listChar);

	resultStr = new char[sizeResult + 1];
	if (resultStr == NULL)
		return NULL;

	resultStr = strcpy(resultStr, str);
	va_start(listChar, str);

	while ((parameter = va_arg(listChar, char*)) != NULL)
		resultStr = strcat(resultStr, parameter);

	va_end(listChar);


	return resultStr;
}