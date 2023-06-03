#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;
};
bool cmpByMarks(Student a, Student b)
{
    if (a.total_marks == b.total_marks) return a.id < b.id;
    return a.total_marks > b.total_marks;
}
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
        cin >> std[i].math_marks;
        cin >> std[i].eng_marks;
        std[i].total_marks = std[i].math_marks + std[i].eng_marks;
    }
    sort(std, std+n, cmpByMarks);
    for(int i=0; i<n; i++)
    {
         cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << " " << std[i].math_marks << " " << std[i].eng_marks << endl;
    }
    return 0;
}