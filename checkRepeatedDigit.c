// Two cases:
// when N > 0 and break. meeans there's a repeated digit.
// when N == 0. means noting is repeated.

#include <stdio.h>

int main(void)
{
	int N, rem;

	int seen[10] = {0};
	printf("Enter a number to check its if it has repeated digits or not: ");
	scanf("%d", &N);

	while (N > 0)
	{
		rem = N%10;
		if (seen[rem] == 1)
			{
				break;
			}
		seen[rem] = 1;
		N = N/10;
	}
	if (N > 0)
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
	return (0);
}
