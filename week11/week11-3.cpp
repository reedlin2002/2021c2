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
    vector<student> stu(N);//�ҥ� vector �� stu �ܼ�
    //���Ostudent stu�o���ܼ� �i��N��student
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
