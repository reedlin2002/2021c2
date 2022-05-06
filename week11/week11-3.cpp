#include <iostream>
#include <vector>
using namespace std;
class student
{
public:
    char name[30];
    int grade;
};
int main()
{
    int N;
    cin >> N;
    vector<student> stu(N);//啟用 vector 的 stu 變數
    //單位是student stu這個變數 可裝N個student
    for(int i=0;i<N;i++)
    {
        //cin >> name[i] >> grade[i];
        cin >> stu[i].name >> stu[i].grade;
    }

    for(int i=0;i<N;i++)
    {
        //cout << name[i] << std::endl;
        cout << stu[i].name << " " << stu[i].grade << endl;
    }
}
