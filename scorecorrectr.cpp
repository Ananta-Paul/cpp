#include<iostream>
using namespace std;
int main(){
    int T,N,i,j;
    float X;
    bool b=false;
    cin>>T;
    while(T!=0){
        cin>>N>>X;
        for (i=1;i<=N;i++){
        for(j=0;j<=N-i+1;j++){
        if (((3*i-j)==X)&& (i+j)<=N){
            cout<<"YES"<<endl;
            cout<<i<<" "<<j<<" "<<N-i-j<<endl;
            b=true;
            break;
        }
        if(i==N&&(i+j)>N){
             b=true;
             cout<<"NO"<<endl;
         }
        }
        if(b){
        break;
        }
        }
        T--;
        b=false;
    }
}
