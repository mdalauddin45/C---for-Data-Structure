#include<iostream>
using namespace std;
void my_swap(int *a, int *b){
      int x=*a;
          *a=*b;
          *b=x;
}
int main(){
    int a,b;
    cin>>a>>b;
    my_swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}