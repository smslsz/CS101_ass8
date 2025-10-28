#include <iostream>
#include <vector>
#include <string>
using namespace std;
void move(int n,int i,int j,vector<string> &a){
    if(n==1){cout<<"1:"<<a[i]<<"->"<<a[j]<<'\n';}
    else {
        move(n-1,i,3-i-j,a);
        cout<<n<<":"<<a[i]<<"->"<<a[j]<<'\n';
        move(n-1,3-i-j,j,a);
    }
}

int main(){
    int n;
    cin>>n;
    vector<string> a(3);
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    move(n,0,2,a);
    return 0;
}