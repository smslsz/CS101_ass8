#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<vector<string>> m(n,vector<string>(n,""));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>m[i][j];
            }
        }
    }
}