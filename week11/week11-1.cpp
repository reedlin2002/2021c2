//#include <stdio.h>  舊
#include <iostream> //新
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
        //你的資料,往右流到變數裡面
    }

    for(int i=0;i<N;i++)
    {
        std::cout << name[i] << std::endl;//end line表示跳行
        //送到左邊 << 變數
    }
}
