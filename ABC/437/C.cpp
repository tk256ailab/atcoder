#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    ll N;
    cin >> N;
    ll total_p = 0;
    vector<ll> WplusP;
    rep(i, N) {
        ll w, p;
        cin >> w >> p;
        total_p += p;
        WplusP.push_back(w + p);
    }

    sort(WplusP.begin(), WplusP.end());

    ll ans = 0, curr_wp = 0;
    for(const auto& wp : WplusP) {
        if(curr_wp + wp <= total_p) {
            curr_wp += wp;
            ans++;
        }
        else break;
    }

    cout << ans << endl;

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}