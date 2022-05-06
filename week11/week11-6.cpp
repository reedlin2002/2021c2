#include <vector> //vect<???> STL功能
#include <iostream> //cin 或 cout
using namespace std;
int main()
{
    vector<int> v; //v是vector裡面裝int
    // 沒說多大,所以v有0個
    v.push_back(10); //把10放進去, v有1個;
    v.push_back(11); //把11放進去, v有2個;
    v.push_back(15); //把15放進去, v有3個;
               //迴圈會用的那個i
    vector<int>::iterator it;
    for(it=v.begin() ; it!=v.end() ; it++) //for(int i=0;i<3;i++)
    {
        cout << *it << endl; //cout << v[i] << endl;
    }
}
