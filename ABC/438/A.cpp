#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define YN {cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}// if(ans[i])YN;

void solve() {
    int D, F;
    cin >> D >> F;
    cout << (F + D - 1) % 7 + 1 << endl;

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}