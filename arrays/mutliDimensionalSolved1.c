#include <stdio.h>
/*
Write a program that reads a 5*5 array of intergers and then prints the row sum and the column sum. 
enter row1: 8   3   9   0   10
enter row2: 3   5   17  1   1 
enter row3: 2   8   6   23  1 
enter row4: 15  7   3   2   9
enter row5: 6   14  2   6   0

Row T:      30  27  40  36  28
Column T:   34  37  37  32  21
*/

#include <stdio.h>

int main(void)
{
	int i, j, sum;

	sum = 0;
	int arr[5][5] = {
		{8, 3, 9, 0, 10},
		{3, 5, 17, 1, 1},
		{2, 8, 6, 23, 1},
		{15, 7, 3, 2, 9},
		{6, 14, 2, 6, 0}

	};

	//Row sum

	printf("Row total:    ");

	for (i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			sum += arr[i][j];
		}
		printf("%d ", sum);
		sum = 0;
	}

	//Column sum

	printf("\nColumn total: ");
	for (j=0; j<5; j++)
	{
		for (i=0; i<5; i++)
		{
			sum += arr[i][j];
		}
		printf("%d ", sum);
		sum=0;
	}
	return (0);
}
