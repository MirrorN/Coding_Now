#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100
int N;
int L[MAX_N];

void solve(){
    int ans = 0;
    // 优先队列实现 huffman tree
    priority_queue<int, vector<int>, greater<int> > que;
    for(int i=0; i<N; i++)
        que.push(L[i]);
    while(que.size()>1){
        int a = que.top();
        que.pop();
        int b = que.top();
        que.pop();
        ans += a + b;
        que.push(a+b);
    }
    cout<<ans<<endl;
}

int main(){
    cin>>N;
    for(int i=0; i<N; i++)
        cin>>L[i];
    solve();
}
