#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    int N;
    cin >> N;
    vector<pair<int, int>> st;

    rep(i, N) {
        int a;
        cin >> a;

        if(st.empty() || st.back().first != a) st.push_back({a, 1});
        else {
            st.back().second++;
            if(st.back().second == 4) st.pop_back();
        }
    }

    int ans = 0;
    for(auto p : st) ans += p.second;

    cout << ans << endl;

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}