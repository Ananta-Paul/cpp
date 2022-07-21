#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class Graph{
int v;
list<int>*adj;
public:
Graph(int v);
void addEdge(int a,int b);
vector<int> BFS(int s);

};
Graph::Graph(int v){
    this->v=v;
    adj=new list<int>[v];
}
void Graph::addEdge(int a,int b){
    adj[a].push_back(b);
}
 vector<int>Graph::BFS(int s){
    bool *visited=new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int>q;
    vector<int>arr;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        s=q.front();
        arr.push_back(s);
        //cout<<s<<endl;
        q.pop();

    for(auto j:adj[s]){
        if(!visited[j]){
        q.push(j);
        visited[j]=true;
        }
    }
    }
    return arr;
}
int main(){
    int v,a,b,s,c=0;
    vector<int>ar;
    cout<<"Enter the number of edges: "<<endl;
    cin>>v;
    Graph G(v);
    cout<<"Enter the edges which linked to each other(press 0 0 for finish your input): "<<endl;
    while(c==0){
        cin>>a>>b;
        if(a==b && a==0){
        c=1;
        break;
        }
        else{
            G.addEdge(a,b);
        }
    }
    cout<<"Enter the strating edges: "<<endl;
    cin>>s;
    ar=G.BFS(s);
    cout<<"BFS traversal: ";
    for(int i=0;i<v;i++){
        cout<<ar[i]<<"-";
    }
    return 0;
    
}