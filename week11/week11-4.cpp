#include <iostream>
#include <vector>
#include <algorithm>//�u��Ƶ��c�B�t��k�v���t��k
using namespace std;
class student
{
public:
    char name[30];
    int grade;
};
bool compare(student a, student b)
{
    return a.grade > b.grade;
}
int main()
{
    int N;
    cin >> N;
    vector<student> stu(N);
    for(int i=0;i<N;i++)
    {
        cin >> stu[i].name >> stu[i].grade;
    }

    for(int i=0;i<N;i++)
    {
        cout << stu[i].name << " " << stu[i].grade << endl;
    }
}
