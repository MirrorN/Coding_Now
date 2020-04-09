#include<bits/stdc++.h>
using namespace std;
#define MAX_N 100

typedef long long ll;

int N;
int L[MAX_N];
void solve(){
    ll ans = 0;
    while(N > 1){
        int min1 = 0;
        int min2 = 1;
        if(L[min1] > L[min2])
            swap(min1, min2);
        for(int i=2; i<N; i++){
            if(L[i] < L[min1]){
                min2 = min1;
                min1 = i;
            }
            else if(L[i] < L[min2]){
                min2 = i;
            }
        }
        int t = L[min1] + L[min2];
        ans += t;
        L[min1] = t;
        L[min2] = L[N-1];
        N--;
    }
    printf("%d\n", ans);
}

int main(){
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>L[i];
    }
    solve();
}
