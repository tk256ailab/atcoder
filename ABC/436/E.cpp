#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    int N;
    cin >> N;
    vector<int> P(N);
    rep(i, N) {
        cin >> P[i];
        P[i]--;
    }

    vector<bool> visited(N, false);
    ll ans = 0;

    for(int i=0; i<N; i++) {
        if(!visited[i]) {
            ll cycle_len = 0;
            int curr = i;

            while (!visited[curr]) {
                visited[curr] = true;
                curr = P[curr];
                cycle_len++;
            }

            ans += cycle_len * (cycle_len - 1) / 2;
        }
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}