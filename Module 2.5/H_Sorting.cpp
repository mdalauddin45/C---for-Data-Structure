#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[],int n){
     for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;i<n;j++){
            if(arr[i]<arr[min_idx]){
                min_idx=i;
            }
            swap(&arr[min_idx],&arr[i]);
        }
     }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   selectionSort(arr,n);
   printArray(arr,n);
    return 0;
}