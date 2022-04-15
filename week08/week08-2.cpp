#include <stdio.h>
#include <stdlib.h>   //qsort()
#include <string.h>  //strcmp()
char nation[2000][80];  //每筆80字母
   //國家名 2000筆
int compare(const void *p1, const void *p2)
{
	return strcmp ( (char*)p1 , (char*)p2 );
}
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

	qsort (nation, N, 80, compare);

	nation[N][0]=0;  //空字串
	int combo=1;  //白色的那1筆

	for(int i=0;i<N;i++)
	{
		if(strcmp ( nation[i], nation[i+1]) == 0)
		{
			combo++;  //多找到1個相同的
		}
		else
		{
			printf("%s %d\n", nation[i], combo);
			combo = 1;  //新的開始 , 有第1筆
		}
	}
}
