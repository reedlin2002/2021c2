#include <stdio.h>
#include <stdlib.h>   //qsort()
#include <string.h>  //strcmp()
char nation[2000][80];  //�C��80�r��
   //��a�W 2000��
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

	nation[N][0]=0;  //�Ŧr��
	int combo=1;  //�զ⪺��1��

	for(int i=0;i<N;i++)
	{
		if(strcmp ( nation[i], nation[i+1]) == 0)
		{
			combo++;  //�h���1�ӬۦP��
		}
		else
		{
			printf("%s %d\n", nation[i], combo);
			combo = 1;  //�s���}�l , ����1��
		}
	}
}
