//#include <stdio.h>  ��
#include <iostream> //�s
#include <vector>
char name[100][100];
int grade[100];
int main()
{
    int N;
    //scanf("%d",&N);
    std::cin >> N;
    for(int i=0;i<N;i++)
    {
        std::cin >> name[i] >> grade[i];
        //�A�����,���k�y���ܼƸ̭�
    }

    for(int i=0;i<N;i++)
    {
        std::cout << name[i] << std::endl;//end line��ܸ���
        //�e�쥪�� << �ܼ�
    }
}
