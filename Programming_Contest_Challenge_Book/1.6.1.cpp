#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int len[100];
    bool flag = false;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>len[i];
    }
    sort(len, len+n);
    for(int i=n-1; i>=2; i--){
        if(len[i-1]+len[i-1] > len[i]){
            cout<<len[i]+len[i-1]+len[i-2]<<endl;
            flag = true;
            break;
        }
    }
    if(!flag)
        cout<<"0"<<endl;
}

/*
int n;
int a[MAX_N];
void solve(){
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            for(int k=0; k<j; k++){
                int len = a[i] + a[j] + a[k];
                int ma = max(a[i], max(a[j], a[k]));
                int res = len - ma;
                if(ma < res){
                    ans = max(ans, len);
                }
            }
        }
    }
    cout<<ans<<endl;
}
*/
