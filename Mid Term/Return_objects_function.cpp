#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
    char name[100];
    int id;
    int sem;
    Students(int i,int s,char*n)
    {
        id=i;
        sem=s;
        strcpy(name,n);
    }
};
Students fun(){
     char name[100]="Ala Uddin";
     Students alauddin(220239013,2,name);
     return alauddin;
}
int main(){
        Students alauddin=fun();
      cout<<"Name: "<<alauddin.name<<endl<<"Id: "<<alauddin.id<<endl<<"Semester: "<<alauddin.sem<<endl;
    return 0;
}