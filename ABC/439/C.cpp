#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    ll N;
    cin >> N;

    vector<ll> cnt(N+1, 0);
    
    for(ll x = 1; x * x * 2 <= N; x++) {
        for(ll y = x + 1; ; y++) {
            ll val = x * x + y * y;
            if(val > N) break;
            cnt[val]++;
        }
    }

    vector<ll> ans;
    for(ll i=1; i<=N; i++) {
        if(cnt[i] == 1) ans.push_back(i);
    }

    cout << ans.size() << endl;
    for(ll num : ans) cout << num << ' ';
    cout << endl;

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}