#include <stdio.h>
#include <stdlib.h>

void find(int*, int*, int*);

int main(void)
{
	int n;
	int* num;
	int i;
	int onetwothree[3];
	int p = 0;

	onetwothree[0] = 1;
	onetwothree[1] = 2;
	onetwothree[2] = 4;

	scanf("%d", &n);
	num = (int*)malloc(sizeof(int)*n);

	for (i = 0;i<n;i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0;i<n;i++)
	{
		p = 0;
		if (num[i]<4)
			printf("%d\n", onetwothree[num[i] - 1]);
		else
		{
			find(&num[i], onetwothree, &p);
			printf("%d\n", p);
		}


	}

	return 0;
}

void find(int* num, int* onetwothree, int* p)
{
	int i;
	int newnum;

	for (i = 1;i <= 3;i++)
	{
		if (*num - i<4)
			*p += onetwothree[*num - i-1];
		else
		{
			newnum = *num - i;
			find(&(newnum), onetwothree, &(*p));
		}
	}
}
