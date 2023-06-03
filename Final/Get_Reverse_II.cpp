#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
};
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student std[n];
    for(int i=0; i<n; i++)
    {
        cin >> std[i].nm;
        cin >> std[i].cls;
        cin >> std[i].s;
        cin >> std[i].id;
    }
    for (int i=0; i<n/2; i++) {
        swap(std[i].id, std[n-1-i].id);
    }
    for(int i=0; i<n; i++)
    {
         cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << endl;
         
    }
    return 0;
}