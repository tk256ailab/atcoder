#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    map<ll, int> cntL, cntR;
    rep(i, N) {
        cin >> A[i];
        cntR[A[i]]++;
    }
    
    ll ans = 0;

    for(int j=0; j<N; j++) {
        cntR[A[j]]--;

        if(A[j] % 5 == 0) {
            ll base = A[j] / 5;
            ll val7 = base * 7;
            ll val3 = base * 3;

            ll L7 = cntL[val7];
            ll L3 = cntL[val3];
            ll R7 = cntR[val7];
            ll R3 = cntR[val3];

            ans += L7 * L3 + R7 * R3;
        }

        cntL[A[j]]++;
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