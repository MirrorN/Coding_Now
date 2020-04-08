#include<bits/stdc++.h>
using namespace std;
#define MAX_N 100
int N;
char S[MAX_N];
char T[MAX_N];


void solve(){
    int l=0;
    int r=N-1;
    int k=0;
    bool isfront = true;
    while(l<=r){
        for(int t=0; t<=(r-l)/2; t++){
            if(S[l+t] < S[r-t]){
                isfront = true;
                break;
            }
            else{
                isfront = false;
                break;
            }
        }
        T[k++] = isfront?S[l++]:S[r--];
    }
    cout<<T<<endl;
}
int main(){
    cin>>N;
    for(int i=0; i<N; i++)
        cin>>S[i];
    solve();
}
