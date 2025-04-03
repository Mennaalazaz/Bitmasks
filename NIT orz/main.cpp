#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}

void solve() {
    ll n,z; cin>>n>>z;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }
    ll maxi=0;
    for (ll i = 0; i < n; i++) {
        maxi=max(maxi,(v[i]|z));
    }
    cout<<maxi<<endl;

}

int main() {
    fastIO();
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}