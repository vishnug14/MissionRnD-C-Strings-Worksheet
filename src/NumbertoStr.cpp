/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
char *reverse(char*,int, int);
int number_after_decimal(float, int);
void number_to_str(float num, char *str,int decimal){
	int i,j=0,e,index=0,index_st;
	float f;
	i = (int)num;
	if (i<0){
		str[index] = '-';
		i = -i;
		num = -num;
		index++;
	}
	index_st = index;
	f = num -(float) i;
	e = number_after_decimal(f, decimal);
		while (i>0){
			str[index] = i % 10 + '0';
			i = i / 10;
			index++;
		}
		str = reverse(str,index_st, index-1);
		if (e == 0){
			str[index] = '\0';
			printf("%s", str);
		}
		else{
			str[index++] ='.';
			j = index;
			while (e > 0){
				str[index] = e % 10 + '0';
				e = e / 10;
				index++;
			}
			str = reverse(str,j,index-1);
			str[index] = '\0';
		}
}
int number_after_decimal(float f, int dec){
	int i,j=0;
	for (i = 0; i < dec; i++){
		f *= 10;
		j = (j * 10) + (int)f;
		f = f - (int)f;
	}
	return j;
}
char *reverse(char* s, int slen,int len){
	int j=len,temp;
	while (slen<j){
		temp = s[slen];
		s[slen] = s[j];
		s[j] = temp;
		slen++;
		j--;
	}
	return s;
}
