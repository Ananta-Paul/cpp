#include<iostream>
#include<math.h>
using namespace std;
int cheak (int n,int arr[]){
    for(int i=0;i<4;i++){
    if(arr[i]==n)
    return i+1;
    }
    return 0;
}
int main(){
     int X,Y,A,B,T,M,i=0,C=0,v=0,p=0;
    int arr[4];
    for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        for(int i=1;i<4;i++){
            arr[i]=arr[i+1];
        }
        cout<<100<<(sizeof(arr)/sizeof(arr[0]))<<endl;
    
    int ar[4],c=0,A,B,C,D;
    for(int i=0;i<4;i++){
        ar[i]=arr[i];
    }
    
        for(int i=0;i<4;i++){
            ar[i]=ar[i+1];
        }
    
    
        for(int i=0;i<3;i++){
            ar[i]=ar[i+1];
        }  
    
    
        for(int i=0;i<2;i++){
            ar[i]=ar[i+1];
        }
    
    
        for(int i=0;i<1;i++){
            ar[i]=ar[i+1];
        
    }
        

        cout<<100<<(sizeof(arr)/sizeof(arr[0]));
 
}
// int cheakall(int a,int b,int arr[]){
//     int ar[4],c=0,A,B,C,D;
//     for(int i=0;i<4;i++){
//         ar[i]=arr[i];
//     }
//     A=cheak(a+b,ar);
//     if(A){
//         for(int i=A-1;i<4;i++){
//             ar[i]=ar[i+1];
//         }
//     }
//     A=cheak(a-b,ar);
//     if(A){
//         for(int i=A-1;i<3;i++){
//             ar[i]=ar[i+1];
//         }  
//     }
//     A=cheak(a*b,ar);
//     if(A){
//         for(int i=A-1;i<2;i++){
//             ar[i]=ar[i+1];
//         }
//     }
//     A=cheak(a/b,ar);
//     if(A){
//         for(int i=A-1;i<1;i++){
//             ar[i]=ar[i+1];
//         }
//     }
//     if(ar[0]==0)
//     return 1;
//     else
//     return 0;
// }