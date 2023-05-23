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
Students fun(){
     char name[100]="Mynul Alam";
     Students mynul(31,'A',7,name);
     return mynul;
}
int main(){
        Students mynul=fun();
   cout<<mynul.roll<<endl<<mynul.sec<<endl<<mynul.cls<<endl<<mynul.name<<endl;
    return 0;
}