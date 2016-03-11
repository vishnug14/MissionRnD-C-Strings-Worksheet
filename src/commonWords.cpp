/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31
int length(char*);
int no_of_words(char*);
int check_common_words(char*, char*);

char ** commonWords(char *str1, char *str2) {
	int s1count, i, s2count, j, k, x, c = 0;
	s1count = no_of_words(str1);
	s2count = no_of_words(str2);
	if (s1count != -1&&s2count!=-1){
		char **commwords = (char**)malloc(s1count*(sizeof(char)));
		char **s1words = (char**)malloc(s1count*(sizeof(char)));
		for (i = 0; i < s1count; i++){
			commwords[i] = (char*)malloc(sizeof(char)*SIZE);
			s1words[i] = (char*)malloc(sizeof(char)*SIZE);
			commwords[i][0] = '\0';
		}
		for (i = 0, j = 0, k = 0; str1[i] != '\0'&&j < s1count; i++){
			if (str1[i] != ' '){
				s1words[j][k++] = str1[i];
			}
			else if (str1[i] == ' '){
				s1words[j][k] = '\0';
				j++;
				k = 0;
			}
		}
		s1words[j][k] = '\0';
		for (i = 0; i < s1count; i++){
			x = check_common_words(s1words[i], str2);
			if (x == 1){
				commwords[c] = s1words[i];
				c++;
			}
		}
		if (c>0){
			return commwords;
		}
		else if (c <=0 ){
			return NULL;
		}
	}
	else if(s1count==-1||s2count==-1){
		return NULL;
	}
}

int no_of_words(char* s){
	int i = 0,count=1;
	if (s != NULL){
		for (i = 0; s[i] != '\0'; i++){
			if (s[i] == ' '&&s[i + 1] == ' '){
				count = -1;
				break;
			}
			else if (s[i] == ' '&&i>1){
				count++;
			}
		}
			return count;
	}
	else{
		return -1;
	}
}
int check_common_words(char *s1w, char *s2){
	int i=0,j=0,count=0;
	while (s2[i] != '\0')
	{
		if (s1w[j] == '\0')
			break;
		else if (s2[i] == s1w[j] && s1w[j] != '\0' && s2[i] != ' '){
			j++;
		}
		else
			j = 0;

		i++;
	}
	if (j == length(s1w)){
		return 1;
	}
	else
	return 0;
}
int length(char *s){
	int i = 0;
		while (s[i] != '\0'){
			i++;
		}
		return i;
}


