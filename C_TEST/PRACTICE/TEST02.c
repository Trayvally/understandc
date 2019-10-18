#include<stdio.h>
#include <stdlib.h>
#include <time.h>

static int R[5] = {0};
static char F[][6] = {"剪刀","石头","布"};

int HomeMenu()
{
	int n,m;
	while(1)
	{
	printf("请输入需要多少人猜拳：（2~5人）\n");
	scanf("%d",&n);
	m = n-1;
	if (n>1&&n<6)
	{
		GameStart(n-1);
		break;
	}
	else
		printf("输入错误，请重新输入：（2~5）\n");
	}
	return 0;
}

int GameStart(int n)
{
	int ch,you,opponent,Youwin,num,lose = 1;
	num = 1;
	for ( num = 1; num <= n; num++)
	{
		if(lose)
		{
			you = 4;
			while(you<0||you>2)
			{
			printf("你(玩家0)的出拳为：0（剪刀），1（石头），2（布）\n");
			scanf("%d",&you);
			ch = getchar();
			R[num] = set_random();
			opponent = R[num];
			printf("你出拳为：%s \n",F[you]);
			printf("电脑%d出拳为：%s \n",num,F[opponent]);
			}
		}
		else
		{
			R[num-1] = set_random();
			R[num] = set_random();
			you = R[num-1];
			opponent = R[num];
			printf("电脑%d出拳为：%s \n",num-1,F[you]);
			printf("电脑%d出拳为：%s \n",num,F[opponent]);
		}
		Youwin = Compare(you,opponent);
		printf("Youwin = %d\n", Youwin);
		switch(Youwin)
		{
			case 0:puts("平局");num--;break;
			case 1:puts("前者胜");break;
			case 2:puts("后者胜");lose = 0;break;
		}
	}
	Result(lose,num);
	return 0;
}

int Result(int lose,int num)
{
	if (lose==1)
	{
		puts("恭喜你赢得了最终的胜利！");
	}
	else
	{
		printf("最终赢家为：电脑%d\n",num -1 );
	}
	return 0;
}

int Compare(int x1,int x2)
{
	int a;
	a = x1 - x2 + 2;
	printf("a = %d\n",a );
	switch(a)
	{
		case 0:return 1;break;
		case 1:return 2;break;
		case 2:return 0;break;
		case 3:return 1;break;
		case 4:return 2;break;
	}
}

int set_random()
{
	int b;
	srand((unsigned)time(NULL));
	b = rand()%3;
	return b;
}

int main()
{
	HomeMenu();
	return 0;
}
