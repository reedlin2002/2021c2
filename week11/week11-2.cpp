//#include <stdio.h>  舊
#include <iostream> //新
#include <vector>
char name[100][100];
int grade[100];
using namespace std;//std::重複好多次 其實能省略
int main()
{
    int N;
    //scanf("%d",&N);
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> name[i] >> grade[i];
        //你的資料,往右流到變數裡面
    }

    for(int i=0;i<N;i++)
    {
        cout << name[i] << endl;//end line表示跳行
        //送到左邊 << 變數
    }
}
