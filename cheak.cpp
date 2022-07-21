#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;
bool valid(string a){
    int i;
    if(a.size()>5){
    for( i=0;i<a.size();i++){
        if(isupper(a[i])){
            break;
        }
    }
    if(i==a.size()){
        cout<<"Pasword must be contain a uppercase letter\nRecreate your password...";
    return false;
    }

    for( i=0;i<a.size();i++){
        if(islower(a[i])){
            break;
        }
    }
    if(i==a.size()){
       cout<<"Pasword must be contain a lowercase letter\nRecreate your password...";
    return false; 
    }
    for( i=0;i<a.size();i++){
        if(isdigit(a[i])){
            break;
        }
    }
    if(i==a.size()){
         cout<<"Pasword must be contain a digit\nRecreate your password...";
    return false;
    }
    }
    else{
         cout<<"Pasword must be contain at least 6 characters letter\nRecreate your password...";
    return false;
    }
    return true;
}
int main(){
    string name;
    getline(cin,name);
    cout<<name;

    int i=0;
    while(i==0){
    string pass;
    cin>>pass;
    if(valid(pass))
        i=1;
    }
        cout<<"R";
    
    return 0;

}