#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    for(int i = n;i > 0;--i){
        for(int j = 1;j <= i;++j){
            cout<<j<<" ";
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