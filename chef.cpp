#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	const int m=1e9+7;
	long long int t,a,b,v,q;
	cin>>t;
	while(t--){
		cin>>a;//0111000100
		int arr[32];
		for(int i=0;i<a;i++){
		v=0;
			cin>>b;
			while(b!=0){
				if(arr[v]==0)
				arr[v]=b%2;
				b=b/2;
				v++;

			}
		}
		q=0;
		for(int i=0;i<32;i++){
			q+=arr[i];
	}
		cout<<q<<endl;
	}
	return 0;
}
