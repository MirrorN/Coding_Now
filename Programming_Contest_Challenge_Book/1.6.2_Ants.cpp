#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100
int L;
int n;
int x[MAX_N];

void solve(){
    int min_len = INT_MAX;
    int max_len = INT_MIN;
    for(int i=0; i<n; i++){
        min_len = max(min_len, min(x[i], L-x[i]));
        max_len = max(max_len, max(x[i], L-x[i]));
    }
    cout<<min_len<<endl;
    cout<<max_len<<endl;
}
int main(){
    cin>>L>>n;
    for(int i=0; i<n; i++)
        cin>>x[i];
    solve();
}
