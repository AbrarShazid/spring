#include<bits/stdc++.h>
using namespace std;
int a[7][7]={
  {0,1,1,1,0,0,0},
  {1,0,1,0,0,0,0},
  {1,1,0,1,1,0,0},
  {1,0,1,0,1,0,0},
  {0,0,1,1,0,1,1},
  {0,0,0,0,1,0,0},
  {0,0,0,0,1,0,0},
};
int visited[7]={false};

void dfs(int snode,int n){
  stack<int>st;
  st.push(snode);
  visited[snode]=true;
  while(!st.empty()){
    int c_node=st.top();
    st.pop();
    cout<<c_node<<" ";
    for(int neighbour=0;neighbour<n;neighbour++){
      if(a[c_node][neighbour] and !visited[neighbour]){
        st.push(neighbour);
        visited[neighbour]=true;
      }
    }
  }
}
int main(){
  int snode;
  cout<<"Enter the starting node: ";
  cin>>snode;
  dfs(snode,7);
  
return 0;
}