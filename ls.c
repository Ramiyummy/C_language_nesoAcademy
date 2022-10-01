#include <stdio.h>

int main(void)
{
	int a, b;

	a = b =2;
	printf("%d", a++++b);  //a++ ++  b;
	return 0;
}
