#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j < i+1;++j){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}