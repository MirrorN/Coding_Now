#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100
#define INF INT_MAX
int n;
int m;
char mmap[MAX_N][MAX_N];
int dis[MAX_N][MAX_N];
int sx, sy;
int ex, ey;
typedef pair<int, int> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs(int i, int j){
    queue<P> que;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            dis[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    dis[sx][sy] = 0;
    while(!que.empty()){
        P p = que.front();
        que.pop();
        if(p.first==ex && p.second==ey)
            break;
        for(int i=0; i<4; i++){
            int nx = p.first+dx[i];
            int ny = p.second+dy[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m && mmap[nx][ny]!='#' && dis[nx][ny]==INF){
                que.push(P(nx, ny));
                dis[nx][ny] = dis[p.first][p.second]+1;
            }
        }
    }
    return dis[ex][ey];
}
void solve(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mmap[i][j] == 'S'){
                sx = i;
                sy = j;
            }
            if(mmap[i][j] == 'G'){
                ex = i;
                ey = j;
            }
        }
    }
    cout<<bfs(sx, sy);
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mmap[i][j];
        }
    }
    solve();
}
/**
3 6
#S####
#..###
##..G#
**/
