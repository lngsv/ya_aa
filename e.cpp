#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    unordered_map<char, int> am, bm;
    for (char c : a) {
        ++am[c];
    }
    for (char c : b) {
        ++bm[c];
    }
    cout << (am == bm) << endl;
}