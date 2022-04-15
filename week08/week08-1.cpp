#include <stdio.h>
char nation[2000][80]; //每筆80字母
   //國家名 2000筆
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%s",nation[i]);
		char name[80];
		gets( name );
	}

	for(int i=0;i<N;i++)
	{
		printf("%s\n",nation[i]);
	}
}
