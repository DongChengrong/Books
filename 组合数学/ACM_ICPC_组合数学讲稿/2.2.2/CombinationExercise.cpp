#include<stdio.h>

const int MAX = 11;
int g_S[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  //下标与值对应
int g_r[MAX];

int AllCombination(int S[], int n, int r[], int m);
int NextCombination(int S[], int n, int r[], int m);
void PrintSeq(int seq[], int len);

int main()
{
	freopen("input.txt", "r", stdin);
	
	int i, n, m, result;
	//输入
	n = 10;
	m = 6;

	//处理
	result = AllCombination(g_S, n, g_r, m);

	//输出
	printf("%d\n", result);
	return 0;
}


/////////////////////////////////////////////////////
//功能：求S中取r的下一个组合
//n = 10, m = 6;
//第一次调用时r[] = {0, 1, 2, 3, 4, 5, 6}
//最后一次调用时r[] = {0, 5, 6, 7, 8, 9, 10}
int NextCombination(int S[], int n, int r[], int m)
{
	//找到使r[i] < n - m + i的最大下标i
	

	//r[i]+1
	

	//r[j] = r[j-1] + 1 ; j = i + 1, ... ,m.
	
	
}
////////////////////////////////////////////////////


//功能：S中取r的所有组合
int AllCombination(int S[], int n, int r[], int m)
{
	int i;
	int count = 0;
	for(i = 0; i <= m; i++)
	{
		r[i] = S[i];
	}

	do
	{
		PrintSeq(r, m);
		count++;
		printf("\n");
	}while(NextCombination(S, n, r, m));
	return count;
}


void PrintSeq(int seq[], int len)
{
	int i;
	int firstFlag = 1;
	for(i = 1; i <= len; i++)
	{
		if(1 == firstFlag)
		{
			firstFlag = 0;
		}
		else
		{
			printf(" ");
		}
		printf("%d", seq[i]);
	}
}