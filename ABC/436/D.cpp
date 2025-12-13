#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)

const int dr[4] = {1, -1, 0, 0};
const int dc[4] = {0, 0, 1, -1};

void solve() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    vector<vector<pair<int, int>>> warp_points(26);

    for(int i=0; i<H; i++) {
        cin >> S[i];
        for(int j=0; j<W; j++) {
            if(islower(S[i][j])) {
                warp_points[S[i][j] - 'a'].push_back({i, j});
            }
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, -1));
    queue<pair<int, int>> q;

    dist[0][0] = 0;
    q.push({0, 0});

    vector<bool> warp_used(26, false);

    while(!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        if(r == H - 1 && c == W - 1) {
            cout << dist[r][c] << endl;
            return;
        }

        int current_dist = dist[r][c];

        for(int i=0; i<4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if(0 <= nr && nr < H && 0 <= nc && nc < W) {
                if(S[nr][nc] != '#' && dist[nr][nc] == -1) {
                    dist[nr][nc] = current_dist + 1;
                    q.push({nr, nc});
                }
            }
        }

        if(islower(S[r][c])) {
            int warp_idx = S[r][c] - 'a';

            if(!warp_used[warp_idx]) {
                warp_used[warp_idx] = true;

                for(auto& p : warp_points[warp_idx]) {
                    int nr = p.first;
                    int nc = p.second;

                    if(dist[nr][nc] == -1) {
                        dist[nr][nc] = current_dist + 1;
                        q.push({nr, nc});
                    }
                }
            }
        }
    }

    cout << -1 << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}