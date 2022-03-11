#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while ( scanf("%s",line)==1)
	{
		if(t>1)printf("\n");
		printf("¨®´[%dÅª¨ì¤@µ§¸ê®Æ\n",t);
		t++;
	}
	return 0;
}
