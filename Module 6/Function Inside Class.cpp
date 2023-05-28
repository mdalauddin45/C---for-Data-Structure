#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        mark1=m1;
        mark2=m2;
    }
    void hello(){
        cout<<"hello inside the objects";
    }
    int total_man(){
        return mark1+mark2;
    }
};
int main(){
    Person alo("Md Ala uddin",22,56,98);
    cout<<alo.total_man()<<endl;
    alo.hello();
    // alo.total_man();not output this function called;
    // cout<<alo.name<<endl;
    // cout<<alo.age<<endl;
    return 0;
}