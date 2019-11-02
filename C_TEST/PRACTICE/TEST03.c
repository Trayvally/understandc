#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int R[4]={-1,-1,-1,-1};

void Playmenu();
void Compare();

void Setnumber()
{
	int cnt = 0,n,s;
	srand(clock());
	while(cnt<4)
	{
		s = -1;
		n = rand()%10;
		printf("%d\n",n);
		for(int i = 0;i<cnt;i++)
		{
			
			if(R[i] == n)
			s = 11;		
		}
		if(s == 11)
		continue;
		R[cnt] = n;
		cnt++;
	}
	for(int i = 0;i < cnt;i++)
		printf("%d",R[i]);
	Playmenu();
}

void Playmenu()
{
	puts("欢迎来到猜数字游戏!");	
	Compare();
}	

void Compare()
{
	int a,snum,pnum;
	int player;
	int P[4] = {0};
	while((snum + pnum != 8))
	{	
		snum = 0,pnum = 0;
		puts("请这猜一下不重复的4个数字:");
		scanf("%d",&player);
		a = 1000;
		for(int i = 0;i < 4;i++)
		{	
			printf("R%d = %d\n",i,R[i]);
			P[i] = (player / a);
			for(int j = 0;j < 4;j ++)
			{
				if(P[i] == R[j])
				snum++;
				if(P[i] == R[j] && i == j)
				pnum++;
			}
			player = player % a;
			a /= 10; 
			printf("P%d = %d\n",i,P[i]);
		}
		printf("包含了%d个正确的数字\n而且有%d个数字的位置正确\n",snum,pnum);
	}
	puts("恭喜你！成功通关！");
}
	
	
int main()
{
	Setnumber();
	return 0;
}
