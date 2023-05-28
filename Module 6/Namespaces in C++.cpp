#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Sakib
{
    int age2=21;
    void hello2()
    {
        cout<<"Sakib namespaces"<<endl;
    }
}
using namespace Rakib;
// using namespace Sakib;
int main(){
    cout<<age<<endl;
    hello();
    Sakib::hello2();
    return 0;
}