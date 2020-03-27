#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100
int n;
int m;
char mmap[MAX_N][MAX_N];

bool judge(int i, int j){
    if(i>=0 && j>=0 && i<n &&j<m && mmap[i][j]=='W')
        return true;
    else
        return false;
}
void dfs(int i, int j){
    for(int p=-1; p<=1; p++){
        for(int q=-1; q<=1; q++){
            if(judge(i+p, j+q)){
                mmap[i+p][j+q]='.';
                dfs(i+p, j+q);
            }
        }
    }
}
void solve(){
    int cou = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mmap[i][j] == 'W'){
                mmap[i][j]='.';
                dfs(i, j);
                cou++;
            }
        }
    }
    cout<<cou<<endl;
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin>>mmap[i][j];
    }
    solve();
}

/**
5 5
W....
.W..W
...W.
W..WW
.....
**/
