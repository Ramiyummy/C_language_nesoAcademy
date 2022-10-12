//NOTE: sizeof(short) <= sizeof(int) <= sizeof(long).

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int var1;
	int var2;
	unsigned int var3;
	unsigned int var4;
	short int var5;
	short int var6;
	short unsigned var7;
	short unsigned var8;

	//size of signed integer:
	var1 = INT_MIN;
	var2 = INT_MAX;

	printf("range of signed integer is from: %d to %d", var1, var2);

	// size of unsigned integer
	var3 = 0;
	var4 = UINT_MAX;

	printf("\nrange of unsigned integer is from: %u to %u", var3, var4);

	//size of short signed integer:
	var5 = SHRT_MIN;
	var6 = SHRT_MAX;

	printf("\nrange of short signed integer is from: %d to %d", var5, var6);

	//size of short unisgned integer:
	var7 = 0;
	var8 = USHRT_MAX;

	printf("\nrange of short unigned integer i from: %u to %u", var7, var8);
	return (0);
}
