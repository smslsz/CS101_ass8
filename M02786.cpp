#include <iostream>
#include <vector>
using namespace std;

int pell(int n,vector<int> &dp){
    int ret;
    if(dp[n]!=-1){
        return dp[n];
    }
    else if(n<=2) {
        dp[n]=n;
        ret=n;
    }
    else{
        ret=(2*pell(n-1,dp)+pell(n-2,dp))%32767;
        dp[n]=ret;
        return dp[n];
    }
    return ret;
}
int main(){
    vector<int> dp(1000000,-1);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cout<<pell(x,dp)<<'\n';
    }
    return 0;
}