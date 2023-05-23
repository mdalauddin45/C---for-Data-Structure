#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
    char name[100];
    int roll;
    int cls;
    char sec;
    Students(int r,int s,int c,char*n)
    {
        roll=r;
        sec=s;
        cls=c;
        strcpy(name,n);
    }
};
int main(){
    Students mynul(31,'A',7,"mynul Alam");
    Students alo(13,'A',7,"Md Ala Uddin");



   cout<<mynul.roll<<endl<<mynul.sec<<endl<<mynul.cls<<endl<<mynul.name<<endl;
   cout<<alo.roll<<endl<<alo.sec<<endl<<alo.cls<<endl<<alo.name<<endl;
    return 0;
}