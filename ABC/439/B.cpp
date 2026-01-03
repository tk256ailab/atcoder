#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    int N;
    cin >> N;
    rep(i, 1000000) {
        int a = N % 10;
        int b = (N / 10) % 10;
        int c = (N / 100) % 10;
        int d = (N / 1000) % 10;
        N = a*a + b*b + c*c + d*d;
        if(N == 1) break;
    }

    if(N == 1) YN;

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}