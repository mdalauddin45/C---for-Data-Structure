#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string firstName;
    string lastName;
    int id;
    Person(string firstName,string lastName,int id){
        this->firstName=firstName;
        this->lastName=lastName;
        this->id=id;
    }
    void printPerson(){
    cout<<"Name: "<<lastName<<", "<<firstName<<endl<<" ID: "<<id<<endl;
    }
};
class Student:public Person{
public:
    vector<int> v1;
    Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id) {
        this->v1 = scores;
    }
    char calculate() {
        int total = 0;
        for (int i=0;i<this->v1.size();i++)
            total += this->v1[i];
        int avg = (int) (total / v1.size());
        if (avg >= 90 && avg <= 100) return 'O';
        if (avg >= 80 && avg < 90) return 'E';
        if (avg >= 70 && avg < 80) return 'A';
        if (avg >= 55 && avg < 70) return 'P';
        if (avg >= 40 && avg < 55) return 'D';
        return 'T';
    }
};
int main(){
    string firstName,lastName;
    int id;
    int n;
    cin>>firstName>>lastName>>id>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    Student*s=new Student(firstName,lastName,id,v);
    s->printPerson();
    cout<<" Grade: "<<s->calculate()<<endl;
    return 0;
}