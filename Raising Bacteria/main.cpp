#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}

/*
       Each night, the number of bacteria doubles
          1 -> 2 -> 4 -> 8 -> 16 -> ...
 The problem can be translated into finding the number of 1s in the binary representation of x.
Each 1 in the binary representation of x signifies a point where you need to add a bacterium.
For example:
          x= 5 (101) requires two additions (2 1's)
          x= 7 (111) requires three additions (3 1's)
          x= 8 (1000) requires one
          */
void solve() {
    int x; cin >> x;
    cout<<__builtin_popcount(x);
}

int main() {
    fastIO();
    solve();
    return 0;
}