#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100
int n;
int st[MAX_N];
int et[MAX_N];


void solve(){
    int temp = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(st[i] > temp){
            ans++;
            temp = et[i];
        }
    }
    cout<<ans<<endl;
}
int main(){
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>st[i];
    for(int i=0; i<n; i++)
        cin>>et[i];
    solve();
}
