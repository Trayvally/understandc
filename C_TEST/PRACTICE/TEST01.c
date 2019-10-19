#include <stdio.h>
#include <stdlib.h>

#define RUSULT_SIZE 7
static int R[] = {5,15,30,60,80,95,100};

int CheckOut(int rand);

void set_random()
{
	int a,b,c;
	a = 1;	
	while(a)
	{	
		a = getchar();
		if (a == '\n')
			continue;
		if (a == 0)
			break;
		b = rand()%100+1;
		//printf("b=%d\n",b );
		c = CheckOut(b);
		//printf("c=%d\n",c );
		switch(c){
			case 0:puts("大吉");break;
			case 1:puts("中吉");break;
			case 2:puts("小吉");break;
			case 3:puts("吉");break;
			case 4:puts("末吉");break;
			case 5:puts("凶");break;
			case 6:puts("大凶");break;
		}
	}
}
int main()
{
	set_random();
	return 0;
}



int CheckOut(int rand){
	int i;
	for(int i=0;i< RUSULT_SIZE;i++){
		if(rand < R[i]){
			return i;
		}
	}
}
