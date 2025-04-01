#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void fastIO(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}
int Knowbit(int n,int i) {
    return (n >> i) & 1;
}
int Setbit(int n,int i) { // turn bit to 1
    return n|(1<<i);
}
int Resetbit(int n,int i) { // turn bit to 0
    return n& (~(1<<i));
}

/*
 NOTE:
        we check on each bit
        then after we created each bit of a
        check the whole formula is right or not
 */

void solve() {
    long long b, c, d; cin >> b >> c >> d;

    long long a = 0;
    for (int i = 0; i <= 60; ++i) {
        // Extract the i-th bit from b, c, and d
        int b_bit = Knowbit(b, i);
        int c_bit = Knowbit(c, i);
        int d_bit = Knowbit(d, i);

        // Determine the possible value of a's i-th bit
        int a_bit = -1;
        for (int possible : {0, 1}) {
            int or_res = possible | b_bit;
            int and_res = possible & c_bit;
            if ((or_res - and_res) == d_bit) {
                a_bit = possible;
                break;
            }
        }

        // If no valid bit found, output -1
        if (a_bit == -1) {
            cout << -1 << '\n';
            return;
        }
        // Set the i-th bit of a
        a |= (long long)a_bit << i;
    }

    // Verify the constructed a satisfies the original equation
    if ((a | b) - (a & c) == d && a >= 0 && a <= (1LL << 61)) {
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