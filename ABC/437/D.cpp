#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

const ll MOD = 998244353;

void solve() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];

    sort(B.begin(), B.end());
    vector<ll> SumB(M + 1, 0);
    rep(i, M) SumB[i + 1] = (SumB[i] + B[i]) % MOD;

    ll ans = 0;
    rep(i, N) {
        // B[idx] <= A[i]
        ll idx = upper_bound(B.begin(), B.end(), A[i]) - B.begin();
        ll less = (((idx * A[i]) % MOD) - SumB[idx] + MOD) % MOD;
        ll more = ((SumB[M] - SumB[idx]) - (((M - idx) * A[i]) % MOD) + MOD) % MOD;
        ans = (ans + less + more) % MOD;
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