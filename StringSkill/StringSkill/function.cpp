#include "stdafx.h"

//common
char* input();
void output(char *str);

//lab 1
void numberOrText();
bool checkNumberOrText(char *str);
bool isNumber(char c);

//lab 2
void removeWhiteSpace();
char* removeWhiteSpaceAtHead(char *str);
char* removeWhiteSpaceAtTail(char *str);

//lab 3
void standardize();
char* removeWhiteSpaceBetweenWord(char *str);
char* lowerAllLetter(char *str);
char* upperFirstLetterOfWord(char *str);


//lab 4
void firstChildArrayChar();
int findFirstChildArrayChar(char *parentStr, char *childStr);

//lab 5
void allChildArrayChar();
int* findAllChildArrayChar(char *parentStr, char *childStr);

//lab 6
void arrayCharBehindChildArray();
char* returnArrayCharBehindChildArray(char *parentStr, char *childStr);

//lab 7
void arrayCharBeforeChildArray();
char* returnArrayCharBeforeChildArray(char *parentStr, char *childStr);

//lab 8
void arrayCharBetweenChildArrays();
char* returnArrayCharBetweenChildArrays(char *parentStr, char *leftChildStr, char *rightChildStr);

//lab 9
void mergeArrayChar();
char* str_cat(const char *str, ...);

//lab 10
void stringToArrayNumber();
int* convertStringToArrayNumber(char *str);

//lab 11
void stringToFloat();
float convertStringToFloat(char *str);
