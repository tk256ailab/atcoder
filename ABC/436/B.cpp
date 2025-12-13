#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)

void solve() {
    int N;
    cin >> N;

    vector<vector<int>> ans(N, vector<int>(N, 0));
    int r_pre = 0, c_pre = (N - 1) / 2, k = 1, r, c;
    ans[r_pre][c_pre] = k;
    for(int i=1; i<N*N; i++) {
        r = (N + r_pre - 1) % N, c = (c_pre + 1) % N;
        k++;
        if(ans[r][c] == 0) {
            ans[r][c] = k;
            r_pre = r;
            c_pre = c;
        }
        else {
            r = (r_pre + 1) % N, c = c_pre;
            ans[r][c] = k;
            r_pre = r;
            c_pre = c;
        }
    }
    rep(i, N) {
        rep(j, N) {
            if(j != N - 1) cout << ans[i][j] << ' ';
            else cout << ans[i][j];
        }
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}