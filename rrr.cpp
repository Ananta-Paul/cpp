#include<iostream>
#include<math.h>
using namespace std;
void quicksort(int arr[10],int f,int l ){
    int pivot,i,j,temp,a;
    if (l>f)
    {   a=f;
        pivot=arr[l];
        i=f;
        j=l;
        while (i<j)
        {
            while (fabs(arr[i])<=fabs(arr[a]) && i<l)
            {
                i++;
            }
            while (fabs(arr[j])>fabs(arr[a]))
            {
                j--;
            }
            if (i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            } 
        }
        temp=arr[a];
        arr[a]=arr[j];
        arr[j]=temp;

        quicksort(arr,f,j-1);
        quicksort(arr,j+1,l);
    }
    
}
int main(){
    int A,B,T,n,i=0,C=0;
    cin>>T;
    
    while(T--){
        cin>>n>>A;
        int arr[n+1];
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<arr[0];
    for(i=0;i<A;i++){
        arr[0]=arr[0]+1;
        quicksort(arr,0,n-1);
    }
    cout<<arr[0]<<endl;
    }
    return 0;
}