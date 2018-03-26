#include<stdio.h>
#include<string.h>

const int SEQ_LENGTH = 4;

int sequence[SEQ_LENGTH];

void PrintSeq(int seq[], int len);    //输出序列
int PrintAllPermutation(int seq[], int len);    //输出所有排列
int NextPermutation(int seq[], int len);    //生成下一个排列 
void Swap(int *a, int *b);   

int main()
{	
	//input
	freopen("input.txt", "r", stdin);
	memset(sequence, 0, sizeof(sequence));    //初始化数组
	int i;
	for(i = 0; i < SEQ_LENGTH; i++)
	{
		sequence[i] = i + 1;
	}
	
	int permutationCount = PrintAllPermutation(sequence, SEQ_LENGTH);
	printf("%d\n",permutationCount);

	return 0;
}

///////////////////////////////////////////////////////
//功能：生成下一个排列
//返回值：1,表示存在下一个序列; 0,表示不存在下一个序列

int NextPermutation(int seq[],    //用于排序的数组
					int len)    //seq[]长度
{	
	//从后往前，找到第一个降序数对,ab.
	

	//找到a后面比a大的最后一个数,c


	//置换a、c
	

	//把c之后的序列翻转
	
	
}
///////////////////////////////////////////////////////


//功能：输出所有排列
//返回值：生成的排列数
int PrintAllPermutation(int seq[], int len)
{
	int count = 0;
	do
	{
		PrintSeq(seq, len);
		count++;
	}while(NextPermutation(seq, len));
	return count;
}

//功能：输出序列
void PrintSeq(int seq[], int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		printf("%d ", seq[i]);
	}
	printf("\n");
}