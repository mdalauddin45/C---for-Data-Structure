#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls; 
    char s;
    int id;
};
bool cmp(Student a,Student b)
{
    if(a.id<b.id) return true;
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
        cin>>a[i].cls>>a[i].s>>a[i].id;
        cin.ignore();
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
       
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
     
    return 0;
}