//Simple forumula: size of 1 array element * number of elements = size of whole array.
#include <stdio.h>

int main(void)
{
	 int a[] = {3, 2, 3, 3, 4, 3, 2, 5, 6, 4, 3, 2, 1, 3, 1, 4, 5, 3, 2, 2, 1, 3, 2, 1, 4, 3};
	 printf("%d", sizeof(a)/sizeof(a[4]));
	return (0);
}
