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
    // with out constructor declear a dynamic object 
    //   Students*mynul=new Students;
    char name[100]="Mynul Alam";
     // with constructor declear a dynamic object 
     // dereperace kory function k print korty hoi example:  cout<<(*mynul).roll<<endl;
     // shorcut print example cout<<mynul->cls<<endl;
        Students*mynul=new Students(31,'A',7,name);
        cout<<(*mynul).roll<<endl;
        cout<<mynul->cls<<endl;
//    cout<<mynul.roll<<endl<<mynul.sec<<endl<<mynul.cls<<endl<<mynul.name<<endl;
    return 0;
}