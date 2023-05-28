#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
       (*this).name=name;
       (*this).age=age;
    }
    void hello(){
        cout<<"Hello"<<endl;
    }
};
int main(){
    Person alo("Md Ala uddin",22);
   cout<<alo.name<<endl;
   cout<<alo.age<<endl;
    return 0;
}