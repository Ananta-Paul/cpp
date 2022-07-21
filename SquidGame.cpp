#include<iostream>
using namespace std;
int main(){
    int temp=0;
     int arr[]={9, 10, 1, 2, 3, 4, 8, 0, 0, 0, 0, 0, 0, 0, 1}; 
    int n=15;
    //cout<<"1,1";
         int c=0;
       int i=0;
       while(i<n) {
           if(arr[i]==0) {
               cout<< -1;
           }
           //cout<<"i"<<i<<c<<endl;9 10 1 2 3 4 8 0 0 0 0 0 0 0 1
            if(i+arr[i]>=n-1) {
                c++;
                cout<<"c-"<< c<<endl;
                }
                 temp=i+arr[i];
                for(int j=i+arr[i];j>i;j--){
                    if(arr[j]>arr[temp])
                    temp=j;
                    cout<<temp<<"arri"<<arr[i]<<"arrit"<<arr[temp]<<endl;
                    if(temp+arr[temp]>=n-1) {
                    //temp=j;
                    //c++;
                    cout<<"c/"<< c<<endl;
                    break;
                    }
                
                }
                      i=temp;
                      c++;
                      cout<<"c."<< c<<endl;         
           }
       cout<<"c"<< c<<endl;
   }
