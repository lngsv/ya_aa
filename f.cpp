#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    v.reserve(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    int k, src, dst;
    cin >> k >> src >> dst;
    --src; --dst;
    vector<int> row(n, -1);
    vector<vector<int>> g(n, row);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int d = abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second);
            if (d <= k) {
                g[i][j] = d;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push({src, 0});
    vector<bool> used(n, false);
    used[src] = true;
    int res = -1;
    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        if (p.first == dst) {
            if (res == -1 || p.second < res) {
                res = p.second;
            }
        } else {
            for (int i = 0; i < n; ++i) {
                if (!used[i] && g[p.first][i] >= 0) {
                    used[i] = true;
                    q.push({i, p.second + 1});
                }
            }
        }
    }

    cout << res << endl;
}