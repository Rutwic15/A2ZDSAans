#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;++j){
            cout<<"*"<<" ";
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