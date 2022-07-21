#include<iostream>
using namespace std;
    long long int merge1(long long arr[],long long a[],long long l,long long mid,long long r){
        long long i,j,k,m;
        long long int c=0;
        i=l;
        j=mid;
        k=l;
        while(i<=mid-1&&j<=r){
            if(arr[i]<=arr[j]){
                a[k++]=arr[i++];
            }else{
                a[k++]=arr[j++];
                c+=mid-i;
            }
        }
        while(i<=mid-1){
            a[k++]=arr[i++];
        }
        while(j<=r){
            a[k++]=arr[j++];
        }
        for(m=l;m<=r;m++){
            arr[m]=a[m];
        }
        return c;
    }
    long long int mergesort(long long arr[],long long a[],long long l,long long r){
        long long int c=0;
        long long mid;
        if(l<r){
         mid=(r+l)/2;
            c+=mergesort(arr,a,l,mid);
            c+=mergesort(arr,a,mid+1,r);
            c+=merge1(arr,a,l,mid+1,r);
        }
            return c;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long a[N];
        return mergesort(arr,a, 0, N-1);
        
    }
int main(){
    long long arr[]={468 ,335, 1, 170, 225, 479, 359, 463, 465, 206, 146, 282, 328, 462, 492, 496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396, 448, 227, 272, 39 ,370, 413 ,168 ,300 ,36, 395, 204, 312, 323};
    cout<<inversionCount(arr,42 );
    return 0;
}
