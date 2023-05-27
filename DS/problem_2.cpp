// Given an array and a number k where k is smaller than size of array, we need to find the k’th 
// smallest element in the given array. It is given that all array elements are distinct.
// Input: arr[] = {7, 10, 4, 3, 20, 15} 
// k = 3 
// Output: 7 
// Input: arr[] = {7, 10, 4, 3, 20, 15} 
// k = 4 
// Output: 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, k;
cin >> n;
int arr[n];
for (int i = 0; i < n; ++i)
cin >> arr[i];
cin >> k;
sort(arr, arr + n);
cout << arr[k - 1];
return 0;
}