#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cur = 0, res = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 1) {
            ++cur;
        } else {
            res = max(cur, res);
            cur = 0;
        }
    }
    res = max(cur, res);
    cout << res << endl;
}