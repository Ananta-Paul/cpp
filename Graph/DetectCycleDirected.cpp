#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class Graph{
int v;
list<int>*adj;
vector<bool>visited;
vector<bool>order;
queue<int>q;
int par;
public:

Graph(int v);
void addEdge(int a,int b);
void DFS(int s);
void print();
void printq();
vector<int>arr;
// void dfs(int s);


};
Graph::Graph(int v){
    this->v=v;
    adj=new list<int>[v];
    visited.assign(v,false);
    order.assign(v,false);
    par=0;
}
void Graph::addEdge(int a,int b){
    adj[a].push_back(b);
}
void Graph::DFS(int s){
     
    visited[s]=true;
    order[s]=true;
    arr.push_back(s);
    //cout<<s<<endl;
    for(auto j:adj[s]){
        
        // else if(!order[j])
        // par=0;
        if(order[j]){
            arr.push_back(j);
            q.push(j);
            par=j;
            print();
            arr.pop_back();
        }  
        if(!visited[j]){      
        DFS(j);
        }
        
    }
    order[s]=false;
    //if(par==0)
    arr.pop_back();
}
void Graph::print(){
    if(q.empty())
    cout<<"No cycle found!"<<endl;
    else{
        cout<<"Cycle: ";
    auto i=arr.begin();
    while(*i!=par){
    i++;
    }
    cout<<*i<<"-";
     i++;
        while(*i!=par){
         cout<<*i<<"-";
         i++;
        }
    cout<<*i<<endl;
    }
}
void Graph::printq(){
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}

int main(){
    int v,a,b,s,c=0;
    
    vector<int>ar;
    // cout<<"Enter the number of edges: "<<endl;
    // cin>>v;
     v=10;
     Graph G(v);
    G.addEdge(0,1);
    G.addEdge(1,2);
    G.addEdge(1,4);
    G.addEdge(2,3);
    G.addEdge(3,1);
    G.addEdge(4,6);
    G.addEdge(5,4);
    G.addEdge(6,5);
    G.addEdge(0,7);
    G.addEdge(7,8);
    G.addEdge(8,0);
    G.addEdge(0,9);
    G.addEdge(9,0);
    G.addEdge(2,9);
    // cout<<"Enter the edges which linked to each other(press 0 0 for finish your input): "<<endl;
    // while(c==0){
    //     cin>>a>>b;
    //     if(a==b && a==0){
    //     c=1;
    //     break;
    //     }
    //     else{
    //         G.addEdge(a,b);
    //     }
    // }
    // cout<<"Enter the strating edges: "<<endl;
    // cin>>s;
    s=0;
    G.DFS(s);
    // G.print();
    //G.printq();
    return 0;
    
}
