#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int Total_and = a[0];
    for (int i = 1; i < n; ++i) {
        Total_and &= a[i];
    }

    cout <<Total_and  << '\n';
}

int main() {
    fastIO();
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}