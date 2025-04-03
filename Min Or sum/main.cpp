#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int total_or = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_or |= a[i];
    }
    cout << total_or << endl;
}

int main() {
    fastIO();
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}