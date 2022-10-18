/*  *
   ***
  *****
 *******
*********  */
#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    for(int i = 0;i < n;++i){
        for(int j = n-i-1;j > 0;--j){
            cout<<" ";
        }
        for(int k=0;k < (2*i + 1);++k){
            cout<<"*";
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