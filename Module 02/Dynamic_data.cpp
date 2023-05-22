#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a= new int; //syntax of dynamic memory allocate
    *a=10; //derepearence value 
    cout<<"Address of a "<<a<<endl; // address return korby ex: 0x1061750
    cout<<"Value of a "<<*a<<endl; // value return korby ex: 10

    float *b= new float;
    *b=10.30;
    cout<<"Address of b "<<b<<endl;
    cout<<"value of b "<<*b<<endl;
    return 0;
}