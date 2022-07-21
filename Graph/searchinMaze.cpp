#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<algorithm>
using namespace std;
const int N=5;
vector<string>A;
bool myCmp(string s1, string s2)
{
 
    // If size of numeric strings
    // are same the put lowest value
    // first
    if (s1.size() == s2.size()) {
        return s1 < s2;
    }
 
    // If size is not same put the
    // numeric string with less
    // number of digits first
    else {
        return s1.size() < s2.size();
    }
}
void dfs(int m[][N],int i,int j,int vis[][N],string s,int n){
    if(i<0 ||j<0||i>n-1||j>n-1)
    return;
    if(m[i][j]==0 ||vis[i][j]==1)
    return;
    //cout<<1;
    if(i==n-1 && j==n-1){
        A.push_back(s);

    }
    vis[i][j]=1;
    dfs(m,i+1,j,vis,s+'D',n);
    dfs(m,i,j+1,vis,s+'R',n);
    dfs(m,i-1,j,vis,s+'U',n);
    dfs(m,i,j-1,vis,s+'L',n);
    vis[i][j]=0;


}
vector<string> MazeSerch(int m[][N],int n){
    A.clear();
    int vis[N][N];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vis[i][j]=0;
        }
    }
    if(m[0][0]==0||m[n-1][n-1]==0){
        return A;
    }
    string s="";//gfb//eryrtygfgfh
    dfs(m,0,0,vis,s,n);
    sort(A.begin(),A.end(),myCmp);
    return A;
}
int main(){
    const int n=5;
  int m[n][n]= {{1, 0, 1, 1,1},
                {1, 1, 1, 0,1}, 
                {1, 1, 0, 1,1},
                {0, 1, 1, 1,0},
                {0, 1, 1, 1,1}};
    vector<string>B=MazeSerch(m,n);
                //cout<<1;
                int i=0;
    for(auto x:B){
        i++;
        cout<<i<<">"<<x<<"-";
    }
    cout<<endl;
    
    return 0;
}