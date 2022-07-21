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
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int N = 100; // size of the hashing array (1e6 === 1*10^6) +2 for a litthe more space
    int idx[N], minIdx = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
            minIdx = min(minIdx, idx[arr[i]]);
        else
            idx[arr[i]] = i;
    }
    if (minIdx == INT_MAX)
        cout << "-1" << endl;
    else
        cout << minIdx + 1 << endl; // 1 based indexing son minIdx+1
    return 0;
}