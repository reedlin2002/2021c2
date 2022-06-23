#include <stdio.h>
int a[100];
int main()
{
    a[0]= 0;
    a[1]= 1;
    for(int i=2;i<=10;i++)
    {
        a[i] =a[i-1] + a[i-2];
        printf("%d ", a[i]);
    }
}
