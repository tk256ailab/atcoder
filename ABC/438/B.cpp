#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    int N, M;
    string S, T;
    cin >> N >> M >> S >> T;

    int ans = 50000000;

    for(int i=0; i<=N-M; i++) {
        int tmp = 0;

        for(int j=0; j<M; j++) {
            int s = S[i + j] - '0';
            int t = T[j] - '0';

            int diff = (s - t + 10) % 10;
            tmp += diff;
        }

        ans = min(ans, tmp);
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