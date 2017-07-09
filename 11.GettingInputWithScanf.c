#include <stdio.h>
#include <stdlib.h>

int main()
{

		char name [20];
		char food[10];
		int age;

		printf("What is your name?\n");
		scanf("%s", name);


		printf("What is favourite food?\n");
		scanf("%s", food);


		printf("На колко си?\n");
		scanf("%d", &age);

		printf("%s, ти си на %d години и обичаш да си похапваш %s!\n", name, age, food);

		return 0;
}
