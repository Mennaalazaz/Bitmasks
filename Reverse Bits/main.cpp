#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}
/*
 NOTE:
       Multiplying by 2 is equivalent to left shifting (<< 1) in binary
 */

unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) { // loop on 32-bits
        int LSB= n&1;             // extract LSB
        result |=  LSB<<(31-i);   // Add LSB to correct position by left shifting
        n>>=1;                 // Move to next LSB
    }
    return result;
}

unsigned int reverseBits2(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        int LSB = n % 2;          // Extract LSB (n % 2)
        result = (result * 2) + LSB; // Shift left by multiplying by 2 and add LSB
        n /= 2;                   // Move to the next bit
    }
    return result;
}

void solve() {
    unsigned int n; cin >> n;
    cout << reverseBits2(n) << endl;
}

int main() {
    fastIO();
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}