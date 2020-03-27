#include<bits/stdc++.h>
using namespace std;

# define MAX_N 100
int n;
int a[MAX_N];
int k;

bool dfs(int sum, int i){
     if(i==n)
        return sum == k;
     if(dfs(sum+a[i], i+1))
        return true;
     if(dfs(sum, i+1))
        return true;
}
void solve(){
    if(dfs(0, 0))
        printf("Yes\n");
    else
        printf("No\n");
}


int main(){
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>k;
    solve();
}
