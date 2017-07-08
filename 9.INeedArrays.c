#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*required header file for strcpy*/

int main()
{
		char name [] = "Svetlozar";
		printf("My name is %s.\n", name);

		name[2] = 'j';
		printf("My name is %s.\n", name);

		char food[] = "brocoli";
		printf("My favourite food is %s.\n", food);

		strcpy(food, "bacon");
		printf("My favourite food is %s.\n", food);

		return 0;
}
