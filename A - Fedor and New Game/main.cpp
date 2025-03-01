#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve() {
    int n,m,k; cin>>n>>m>>k;
    vector<int> a(m+1);
    for(int i=0;i<=m;i++) cin>>a[i];
    int Fedor=a[m]; int friends=0;
    for(int i=0;i<m;i++) {
        int cntDiffernce=0;
        int result=a[i]^Fedor; // calculate difference
        cntDiffernce=__builtin_popcount(result); // count number of 1's
        if(cntDiffernce<=k) {
            friends++;
        }
    }
    cout<<friends<<endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}
