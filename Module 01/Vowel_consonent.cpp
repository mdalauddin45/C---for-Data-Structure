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
        cout<<"Vowel";
        break;
    
    default:
        cout<<"Consonent";
        break;
    }
   
    return 0;
}