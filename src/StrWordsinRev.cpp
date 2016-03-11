/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
char *reverse1(char*, int, int);
void str_words_in_rev(char *input, int len){
	int i = 0, j = len - 1, st_index = 0;
	input = reverse1(input, i, j);
	for (i = 0; i <=len; i++){
		if ((input[i] == ' ')||(i==len)){
			input = reverse1(input, st_index, i - 1);
			st_index = i + 1;
		}
	}
}
char *reverse1(char *s, int i, int j){
	char temp;
	while (i < j){
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
	return s;
}