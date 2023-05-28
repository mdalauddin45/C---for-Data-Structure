#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
int main(){
    Person*rakib=new Person("Rakib Ahasan",35);
    Person*sakib=new Person("Sakib All hasan",25);
    // rakib=sakib;
    // delete sakib; no output
    // rakib->age=sakib->age;
    // rakib->name=sakib->name;
    *rakib=*sakib;
    delete sakib;
    cout<<rakib->name<<endl<<rakib->age<<endl;
    return 0;
}