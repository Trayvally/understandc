#include <stdio.h>
#include <windows.h>

static char R[][20]={"test1234","est1234t","st1234te","t1234tes","1234test","234test1","34test12","4test123"};
int main()
{
	int ms,j;
	scanf("%d",&ms)
	for (int i = 0; i < 1000; ++i)
	{
		j= i%8;
		Sleep(ms);
		system("cls");
		printf("%s\n", R[j]);
	}
	return 0;
}
