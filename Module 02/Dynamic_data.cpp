#include<bits/stdc++.h>
using namespace std;
int main(){
    int *a= new int; //syntax of dynamic memory allocate
    *a=10; //derepearence value 
    cout<<a<<endl; // address return korby ex: 0x1061750
    cout<<*a<<endl; // value return korby ex: 10
    return 0;
}