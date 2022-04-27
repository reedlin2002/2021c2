#include <stdio.h>
int grade[100];
char name[100][30];
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%s %d",name[i],&grade[i]);
	}

	for(int k=0;k<a-1;k++)
	{
		for(int i=0;i<a-1;i++)
		{
			if(grade[i] < grade[i+1])
			{
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;
			}
		}
	}

	for(int i=0;i<a;i++)
	{
		printf("%s %d\n",name[i],grade[i]);
	}
}
