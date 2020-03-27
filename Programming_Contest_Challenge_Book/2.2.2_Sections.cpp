#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100

int n;
int st[MAX_N];
int et[MAX_N];
pair<int, int> itv[MAX_N];

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
void solve(){
    for(int i=0; i<n; i++){
        itv[i].first = st[i];
        itv[i].second = et[i];
    }
    sort(itv, itv+n, cmp);
    int ans = 0;
    int t = 0;
    for(int i=0; i<n; i++){
        if(t < itv[i].first){
            ans ++;
            t = itv[i].second;
        }
    }
    printf("%d\n", ans);
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>st[i];
    for(int i=0; i<n; i++)
        cin>>et[i];
    solve();
}
