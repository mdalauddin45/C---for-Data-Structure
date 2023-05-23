#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
    char name[100];
    int roll;
    int cls;
    char sec;
};
int main(){
    Students mynul;
    mynul.roll=31;
    mynul.cls=12;
    mynul.sec='A';
    char nm[100]="Mynul Alam";
    strcpy(mynul.name,nm);
    Students alauddin;
    alauddin.roll=13;
    alauddin.cls=12;
    alauddin.sec='A';
    char nm2[100]="Md Ala Uddin";
    strcpy(alauddin.name,nm2);

    cout<<mynul.cls;
    return 0;
}