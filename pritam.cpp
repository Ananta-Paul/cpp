/*Given an array arr[] of size n. The task is to find the first repeating element in the array of integers, i.e. an element that occurs more than once and whose index of first occurrence is smallest.
Constrains: 1<=n<=10^6
            0<=Ai<=10^6
Input:
7
1 5 3 4 3 5 6
output:
2
(1 based indexing)*/
#include <iostream>
#include <limits.h>
using namespace std;
int minidx(int arr[100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return i+1;
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
        cout <<"output:"<< minidx(arr,n) << endl; // 1 based indexing son minIdx+1
    return 0;
}