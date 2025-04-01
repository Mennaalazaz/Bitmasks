#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}

int Knowbit(ll n, int i) {
    return (n >> i) & 1;
}

void solve() {
    ll b, c, d;cin >> b >> c >> d;

    ll a = 0; bool possible = true;

    for (int i = 0; i <= 60; ++i) {
        // Extract the i-th bit from b, c, and d
        int b_bit = Knowbit(b, i);
        int c_bit = Knowbit(c, i);
        int d_bit = Knowbit(d, i);


        int a_bit = -1;
        // Determine the possible value of a's i-th bit
        for (int bit : {0, 1}) {
            int or_res = bit | b_bit;
            int and_res = bit & c_bit;
            if ((or_res - and_res) == d_bit) {
                a_bit = bit;
                break;
            }
        }

        if (a_bit == -1) {
            possible = false;
            break;
        }
        // Set the i-th bit of a
        a |= ((ll)a_bit << i);
    }

    // Final verification
    if (possible && ((a | b) - (a & c)) == d) {
        cout << a << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    fastIO();
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
