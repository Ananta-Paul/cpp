#include<iostream>
using namespace std;
int main(){
    int n,q,k;
    cin>>n;
    cin>>q;
    int arr[n][1000];
    for(int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int j,l;
        cin>>j;
        cin>>l;
        cout<<arr[j][l];
        
    }
    return 0;
}