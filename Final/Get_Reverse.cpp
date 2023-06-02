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
    cin.ignore();
    Student a[n];
    for(int i=0;i<n;i++)
    {
        // getline(cin,a[i].name);
        cin>>a[i].name;
        cin>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}