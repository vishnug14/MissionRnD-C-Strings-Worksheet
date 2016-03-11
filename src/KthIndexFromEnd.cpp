/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
int find_length(char*);
char KthIndexFromEnd(char *str, int k) {
	int i=0;
		int len = find_length(str);
		if ((k<len) && (k>=0)&&len>0){
			for (i = 0; i < len; i++){
				if (i == (len - 1 - k)){
					return str[i];
					break;
				}
			}
		}
	else
	return '\0';
}
int find_length(char *s){
	int i = 0;
	if ((s != "") && (s != NULL)){
		while (s[i] != '\0'){
			i++;
		}
		return i;
	}
	else {
		return -1;
	}
}