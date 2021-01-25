#include <iostream>

using namespace std;

int main() {
    string s, j;
    cin >> j >> s;
    int res = 0;
    for (char c : s) {
        if (j.find(c) != j.npos) {
            ++res;
        }
    }
    cout << res << endl;
}