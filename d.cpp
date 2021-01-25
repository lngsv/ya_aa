#include <iostream>

using namespace std;

void gen_par(const string& s, int open, int close, int n) {
    if (s.size() == n * 2) {
        cout << s << endl;
        return;
    }
    if (open < n) {
        gen_par(s + "(", open + 1, close, n);
    }
    if (close < open) {
        gen_par(s + ")", open, close + 1, n);
    }
}

int main() {
    int n;
    cin >> n;
    gen_par("", 0, 0, n);
}