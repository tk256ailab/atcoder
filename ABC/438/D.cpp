#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    ll N;
    cin >> N;
    vector<ll> A(N), B(N), C(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N) cin >> C[i];

    vector<ll> sumA(N+1, 0), sumB(N+1, 0), sumC(N+1, 0);
    for(ll i=0; i<N; i++) sumA[i+1] = sumA[i] + A[i];
    for(ll i=0; i<N; i++) sumB[i+1] = sumB[i] + B[i];
    for(ll i=0; i<N; i++) sumC[i+1] = sumC[i] + C[i];

    ll ans = -1;
    ll max_x_part = -50000000;

    for(ll y=2; y<N; y++) {
        int new_x = y - 1;

        max_x_part = max(max_x_part, sumA[new_x] - sumB[new_x]);
        ans = max(ans, max_x_part + (sumB[y] - sumC[y]) + sumC[N]);
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