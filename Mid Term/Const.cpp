#include<bits/stdc++.h>
using namespace std;
class Preson
{
    public:
    char name[100];
    float height;
    int age;
    Preson(char*n,float h,int a)
    {
        strcpy(name,n);
        height=h;
        age=a;
    }
};
int main(){
    char name[100]="Ala Uddin";
    Preson*alauddin=new Preson(name,5.6,21);
    cout<<"Name: "<<alauddin->name<<endl<<"Height: "<<alauddin->height<<endl<<"Age: "<<alauddin->age<<endl;

    // if we can delete an object follow this Syntax: delete alauddin;
    return 0;
}