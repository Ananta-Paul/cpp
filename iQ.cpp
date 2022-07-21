#include<iostream>
#include<math.h>
using namespace std;
int cheak (int n,int arr[]){
    for(int i=0;i<4;i++){
    if(arr[i]==n)
    return i;
    }
    return 0;
}
int cheakall(int x,int y,int arr[]){
    int ar[2][4],c=0;
    for(int i=0;i<4;i++){
        ar[0][i]=arr[i];
        ar[1][i]=0;
    }
    // for(int i=0;i<4;i++){
    //     cout<<ar[0][i]<<ar[1][i]<<endl;
    // }

    for(int i=0;i<4;i++){
        if(ar[1][i]==0 && ar[0][i]==x+y){
            ar[1][i]=1;
            c++;
        }
        if(ar[1][i]==0 && ar[0][i]==x-y){
            ar[1][i]=1;
            c++;       
        }
        if(ar[1][i]==0 && ar[0][i]==x*y){
            ar[1][i]=1;
            c++;
        }
        if(ar[1][i]==0 && ar[0][i]==x/y){
            ar[1][i]=1;
            c++;
        }
    }
    // for(int i=0;i<4;i++){
    //     if(ar[1][i]==0 && ar[0][i]==x-y){
    //         ar[1][i]=1;
    //         c++;
    //         break;
    //     }       
    //     }
    // for(int i=0;i<4;i++){
    //     if(ar[1][i]==0 && ar[0][i]==x*y){
    //         ar[1][i]=1;
    //         c++;
    //         break;
    //     }       
    //     }
    // for(int i=0;i<4;i++){
    //     if(ar[1][i]==0 && ar[0][i]==x/y){
    //         ar[1][i]=1;
    //         c++;
    //         break;
    //     }       
    //     }
        //cout<<c<<endl;
    //     int a=0,b=0,c=0,d=0;
    // a=cheak(x+y,arr);
    // b=cheak(x*y,arr);
    // c=cheak(x/y,arr);
    // d=cheak(x-y,arr);

    // if(a!=0 && b!=0 &&c!=0 &&d!=0 &&a!=b &&b!=c&&c!=d&&a!=d&&a!=c&&b!=d)
    // return 1;
    if(c==4)
    return 1;
    else
    return 0;
}
int main(){
    int X,Y,A,B,T,M,i=0,C=0,v=0,p=0;
    cin>>T;
    int arr[4];
    while(T--){
    cin>>arr[0];
    if(arr[0]==0)
    C++;
    if(arr[0]<1)
    v++;
    M=arr[0];
    for(i=1;i<4;i++){
    cin>>arr[i];
    if(fabs(M)<fabs(arr[i]))
    M=arr[i];
    if(arr[i]==0)
    C++;
    if(arr[i]<0)
    v++;
    }
    // cout<<fabs(M)-1<<endl;
    
    //for a<b
    if(C==1 &&v==1){
        //for 1
        // if(cheak(fabs(M)-1,arr)){
        //     if(M>0 && cheakall(1,M-1,arr)){
        //     cout<<1<<" "<<M-1<<endl;
        //     v=0;
        //     C=0;
        //     p=1;
        //     }
        //     else if(cheakall(-1,M+1,arr)){
        //     cout<<-1<<" "<<M+1<<endl;
        //     v=0;
        //     C=0;
        //     p=1;
        //     }
        // }
        // else{
        A=1;
        B=fabs(M)-1;
        while(A<B){
            if(cheakall(A,B,arr)){
            cout<<A<<" "<<B<<endl;
            v=0;
            C=0;
            p=1;
            break;
            }
            else if(cheakall(-(A),-(B),arr)){
                cout<<-(A)<<" "<<-(B)<<endl;
                v=0;
                C=0;
                p=1;
                break;
            }
            else{
                A++;
                B=M/A;
            }
        }
        
    }

    
    else if(v==0 && C==0){
        B=1;
        A=fabs(M)-1;
        while(A>B){
            if(cheakall(A,B,arr)){
            cout<<A<<" "<<B<<endl;
            v=0;
            C=0;
            p=1;
            break;
            }
            else{
                B++;
                A=M/B;
            }
        }
    }
    if(p==0){
       cout<<-1<<" "<<-1<<endl;
    }
            v=0;
            C=0;
            p=0; 
    }
}