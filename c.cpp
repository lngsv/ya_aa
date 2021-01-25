#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        return 0;
    }
    int cur;
    cin >> cur;
    cout << cur << endl;
    for (int i = 1; i < n; ++i) {
        int a;
        cin >> a;
        if (a != cur) {
            cout << a << endl;
            cur = a;
        }
    }
}