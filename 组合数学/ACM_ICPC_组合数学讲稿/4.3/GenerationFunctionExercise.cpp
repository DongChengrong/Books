#include<stdio.h>
#include<string.h>

const int MAX = 30;
int poly[MAX];

void PolyMultiply(int a[], int b[], int len);

int main()
{
	freopen("input.txt", "r", stdin);
	int weight, num, i;

	memset(poly, 0, sizeof(poly));
	poly[0] = 1;

	while(scanf("%d%d", &weight, &num) != EOF)
	{
		int b[MAX];
		memset(b, 0, sizeof(b));
		for(i = 0; i <= weight * num; i = i + weight)
		{
			b[i] = 1;
		}

		PolyMultiply(poly, b, MAX);
	}

	for(i = 1; i < MAX; i++)
	{
		if(poly[i] != 0)
		{
			printf("重量 : %2d , 方案数 : %d\n", i, poly[i]);
		}
	}
	return 0;
}

void PolyMultiply(int a[], int b[], int len)
{
	int i, j, exp;

	int c[MAX];
	memset(c, 0, sizeof(c));

	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len; j++)
		{
			exp = i + j;
			if(exp < len)
			{
				c[exp] = c[exp] + (a[i] * b[j]);
			}
			
		}
	}

	for(i = 0; i < len; i++)
	{
		a[i] = c[i];
	}
}