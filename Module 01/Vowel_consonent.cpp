#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"Vowel"<<endl;
        break;
    
    default:
        cout<<"Consonent"<<endl;
        break;
    }
   
    return 0;
}