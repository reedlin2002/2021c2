#include <stdio.h>
#include <vector>
#include <algorithm>
class Record///C++的物件, 用class宣告, 裡面有名字,分數 包起來
{
public:///公開的欄位, 可以被別人main()使用
    char name[30];
    int grade;
};
bool compare(Record a, Record b)
{
    return (a.grade > b.grade);
}

int main()
{
    FILE * fin = fopen("input.txt" , "r");
    int N;
    fscanf( fin, "%d",&N);
    std::vector<Record> student(20); ///右邊是圓括號(N)
    for(int i=0;i<N;i++)
    {
        fscanf(fin, "%s %d",student[i].name, &student[i].grade);
    }

    std::sort( student.begin(), student.end(), compare);

    for(int i=0;i<N;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
