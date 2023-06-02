#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls; 
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a,Student b)
{
    if(a.eng_marks+a.math_marks>b.eng_marks+b.math_marks) return true;    
    if(a.eng_marks+a.math_marks==b.eng_marks+b.math_marks) return false;    
    else return false;
}
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
        cin>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
    }
    //sort function
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}