#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void dfs(int i, int j, int n, char m[33][33], char l, vector<vector<bool>>&visited) {
    if(i<0||i>=n||j<0||j>=n||visited[i][j]||m[i][j]!= l) 
        return;
    
    visited[i][j] = true;
    dfs(i+1, j, n, m, l, visited); // 下
    dfs(i-1, j, n, m, l, visited); // 上  
    dfs(i, j+1, n, m, l, visited); // 右
    dfs(i, j-1, n, m, l, visited); // 左
}
int cc(int n,char m[33][33],char l){
    int ret=0;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[i][j] == l && !visited[i][j]){
                ret++;
                dfs(i,j,n,m,l,visited);
            }
        }
    }
    return ret;
}

int main(){
    int k;
    cin>>k;
    for(int p=0;p<k;p++){
        int n;
        cin>>n;
        char m[33][33];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>m[i][j];
            }
        }
        cout<<cc(n,m,'r')<<" "<<cc(n,m,'b')<<'\n';
    }
    return 0;
}