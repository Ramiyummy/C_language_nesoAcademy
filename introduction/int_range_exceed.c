#include <stdio.h>

int main(void)
{
	unsigned int var;
//after the 4294967295 max value, the output will cycle from 0 again.
	var = 4294967297;
	printf("%u", var);
	return (0);
}
