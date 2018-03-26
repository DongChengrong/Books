#include<stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	
	//输入
	int T;
	scanf("%d", &T);
	int testCase;
	for(testCase = 0; testCase < T; testCase++)
	{
		char cmd[2];    
		int n, m, result;
		scanf("%s%d%d", cmd, &n, &m);    //问题1: 为什么要用字符数组cmd[2],配合%s获取输入？%c方式会出现什么问题？
		
		//处理
		if('A' == cmd[0])    //问题2: "cmd[0] == 'A'"更方便阅读。为何使用这种形式？
		{
			result = Anm(n, m);
		}
		else
		{
			result = Cnm(n, m);
		}

		//输出
		printf("%d\n", result);
	}
	return 0;
}


//Anm()
int Anm(int n, int m)
{
	//
}


//Cnm()
int Cnm(int n, int m)
{
	//
}

