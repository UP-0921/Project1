#include<stdio.h>

int main(void) {
	/*for (int i = 1; i < 10; i++)
	{
		
		if (i == 1 || (i % 2) == 1) {
			continue;
		}
		else {
			printf("구구단 %d단\n", i);
		}
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}*/

	/*int m = 0, n = 0, sum = 0;
	printf("m = ");
	scanf_s("%d", &m);
	for  (int i = 0;  i < m ; i++)
	{
		printf("n = ");
		scanf_s("%d", &n);
		for (int j = 1; j <= n; j++) 
		{
			sum = sum + j;
		}
		printf("%d\n",sum);
		sum = 0;
	}*/
	int n = 0, m = 0;
	printf(" n m = ");
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("1");
		}
		printf("\n");
	}
	// 왜 안바끼는데요?
// 왜 안바끼는데요?
	return 0;
}