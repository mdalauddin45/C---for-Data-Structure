#include<bits/stdc++.h>
using namespace std;
class Preson
{
    public:
    char name[100];
    float height;
    int age;
};
int main(){
     Preson mynul;
     mynul.age=31;
     mynul.height=5.3;
     char nm[100]="Mynul Alam";
     strcpy(mynul.name,nm);
    Preson alauddin;
    alauddin.age=13;
    alauddin.height=5.8;
    char nm2[100]="Md Ala Uddin";
    strcpy(alauddin.name,nm2);
    if(alauddin.age>mynul.age) cout<<"Name: "<<alauddin.name<<endl;
    else  cout<<"Name: "<<mynul.name<<endl;
    return 0;
}