/*

Use MainStrings1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.

Objectives of Strings-1 Lesson:

->Basics of Strings / Char Arrays .
->Learn about 2D Strings
->Convert Numbers/Floats into Strings
->Manipulating Strings

*/
#include <stdio.h>
#include<conio.h>
#include "FunctionHeadersStrings1.h"
void main(){
	//Test KthIndexFromEnd 
	//TestNumbertoStr
	char *str1 = "the are all is well";
	char *str2 = " who what";
	char expected[2][31] = { { "the" }, { "is" } };
	char **res = commonWords(str1, str2);

	//removeSpaces
	//StrWordsinRev


	//commonWords


	_getch();
}