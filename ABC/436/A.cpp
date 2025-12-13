#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)

void solve() {
    int N;
    string S;
    cin >> N >> S;
    for(int i=0; i<N-S.size(); i++) cout << 'o';
    cout << S << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}