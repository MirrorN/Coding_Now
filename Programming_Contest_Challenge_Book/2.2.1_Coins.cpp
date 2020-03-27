#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100
const int val[6] = {1, 5, 10, 50, 100, 500};
int cou[6];
int a = 0;

void solve(){
    int ans = 0;
    int t = 5;
    while(a){
        int temp = min(a/val[t], cou[t]);
        ans += temp;
        a -= val[t]* temp;
        t--;
    }
    cout<<ans<<endl;
}
int main(){
    for(int i=0; i<6; i++)
        cin>>cou[i];
    cin>>a;
    solve();
}
