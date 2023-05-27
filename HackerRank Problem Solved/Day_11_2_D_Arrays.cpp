#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}