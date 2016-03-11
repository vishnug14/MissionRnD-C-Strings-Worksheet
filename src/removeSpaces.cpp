/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>
char removeSpaces(char *str) {
	int index=0,i;
	if ((str != "") && (str != NULL)){
		for (i = 0; str[i]; i++){
			if (str[i] != ' '){
				str[index] = str[i];
				index++;
			}
		}
		str[index] = '\0';
	}
	else{
		return '\0';
	}
}