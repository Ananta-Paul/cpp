#include<iostream>
#include<vector>
using namespace std;
void addedge(vector<int>adj[],int x,int y){
    
    adj[x].push_back(y);
    adj[y].push_back(x);
    
}
void print(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<"List of linked edges of "<<i<<"-->";
        for(auto a:adj[i]){
            cout<<"->"<<a;
        }
        cout<<endl;
    }
}
int main(){
    int v,a,b,c=0;
    cout<<"Enter the number of edges: "<<endl;
    cin>>v;
    vector<int> adj[v];
    cout<<"Enter the edges which linked to each other(press 0 0 for finish your input): "<<endl;
    while(c==0){
        cin>>a>>b;
        if(a==b && a==0)
        c=1;
        else{
            addedge(adj,a,b);
        }
    }
    print(adj,v);

}