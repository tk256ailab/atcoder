#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<vector<int>> A(H, vector<int>(W, 0));
    vector<int> B(N);
    rep(i, H) {
        rep(j, W) cin >> A[i][j];
    }
    rep(i, N) cin >> B[i];

    int ans = 0;
    for(int i=0; i<H; i++) {
        int cnt = 0;
        for(int j=0; j<W; j++) {
            if(find(B.begin(), B.end(), A[i][j]) != B.end()) cnt++;
        }
        ans = max(cnt, ans);
    }

    cout << ans << endl;

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}