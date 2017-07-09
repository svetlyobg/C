#include <stdio.h>
#include <stdlib.h>

int main()
{

	int height = 170;
	printf("Следващата година ще бъда %d см. висок!\n", height+1);

	int a = 3, b = 2;
	printf("%d \"+\"\n", a+b);
	printf("%d \"-\"\n", a-b);
	printf("%d \"*\"\n", a*b);
	printf("%d \"/\"\n", a/b);

	printf("%d \"%\"\n", a%b);
	printf("%d \"%\"\n", 2%b);

	return 0;

}

