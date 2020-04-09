#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100
int N;
int R;
int pos[MAX_N];
void solve(){
    int ans = 0;
    sort(pos, pos+N);
    int i = 0;
    while(i<N){
        int temp = pos[i];
        while(i<N && pos[i] <= temp+R)
            i++;
        temp = pos[i-1];
        while(i<N && pos[i] <= temp+R)
            i++;
        ans ++;
    }
    cout<<ans<<endl;
}


int main(){
    cin>>N>>R;
    for(int i=0; i<N; i++)
        cin>>pos[i];
    solve();
}
