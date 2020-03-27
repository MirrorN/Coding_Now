#include<bits.stdc++.h>
using namespace std;

#define MAX_N 100
int n, m, k[MAX_N];

/**ֻ�Ż����ڲ�ı���**/
bool binary_search(int x){
    int l = 0;
    int r = n;  // ����ʹ�õĶ����ұߴ�һλ

    while(r-l > 1){
        int i = (l+r) / 2;
        if(k[i] == x)
            return true;
        else if(k[i] < x)
            l = i+1;
        else
            r = i;
    }
    return false;
}

void solve(){
    sort(k, k+n);
    bool flag = false;
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            for(int c=0; c<n; c++){
                if(binary_search(m-k[a]-k[b]-k[c])){
                    flag = true;
                }
            }
        }
    }
    if(flag)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}

/**�Ż����ڲ�����ѭ��**/
int kk[MAX_N * MAX_N];

bool binary_search(int x){
    int l=0;
    int r=n;
    while(r-l > 1){
        int i = (l+r)/2;
        if(kk[i] == x)
            return true;
        else if(kk[i]>x)
            r=i;
        else
            l=i+1;
    }
    return false;
}

void solve(){
    for(int c=0; c<n; c++){
        for(int d=0; d<n; d++){
            kk[c*n+d] = k[c]+k[d];
        }
    }
    sort(kk, kk+n*n);
    //...���ಿ��һ��
}


