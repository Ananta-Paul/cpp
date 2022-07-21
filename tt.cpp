#include <iostream>
using namespace std;

int main() {
    int T,x,y,n,a=0,b=0;
    string s;
    cin>>T;

	// your code goes here
	while(T--){
        cin>>n>>x>>y;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                a++;
           
            }
        }
        if(x>=y ){
            if(a>0 && a<n)
            cout<<y<<endl;
            else if(a==0 ||a==n)
            cout<<0<<endl;

        }
        else{
            if(a>0 && a<n)
            cout<<x<<endl;
            else if(a==0 ||a==n)
            cout<<0<<endl;
        }
        a=0;
        b=0;
        }
	return 0;
}