#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};
int main()
{
   int n;
   cin>>n;
   Student a[n];
   for(int i=0;i<n;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
    }
   for(int i=0;i<n;i++){
    cout<<a[i].name<<endl<<a[i].cls<<endl<<a[i].s<<endl<<a[i].math_marks<<endl<<a[i].eng_marks<<endl;
   }
    return 0;
}