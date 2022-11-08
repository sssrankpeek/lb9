#include <stdio.h>
#include<locale.h>
#define ROW 9
#define COL 9
void main()
{
	setlocale(LC_ALL, "RUS");
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; row++)
	{
		for (col = 1; col <= row; col++)
			printf("%5d", col * row);
		printf("\n");
	}
	printf("\n");
	for (row = 1; row <= ROW; row++)
	{
		for (col = 1; col <= COL; col++)
			printf("%5d*%d=%2d", col, row, col * row);
		printf("\n");
	}
	int q, kolvo = 0;
	while (1)
	{
		printf("введите число:");
		scanf("%d", &q);
		char a;
		while (q != 0)
		{
			if (q % 10 == 3)
				kolvo += 1;
			q = q / 10;
		}
		printf("количество цифры 3: %d", kolvo);
		kolvo = 0;
		printf("\nПродолжить? (Да - y, нет - n)");
		scanf("%c", &a);
		if ((a = getchar()) == 'n') break;
	}

	int n, i, j;
	char s = '*';
	printf("\nвведите катет");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= i; j--)
		{
			printf("  ");
		}
		for (j = 1; j <= i; j++)
		{
			if (j > 1 && j < i && i > 1 && i < n)
			{
				if (j >= 2)	
					printf(" ");
				printf(" ");
			}
			else
			{
				printf(" ");
				printf("%c", s);
			}
		}
		printf("\n");
	}
}
