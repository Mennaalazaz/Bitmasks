#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int Knowbit(int n,int i) {
    return (n >> i) & 1;
}

void solve() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> ans; // to store all subsets
    for(int mask=0;mask<=(1<<n)-1;mask++) {
        vector<int> v; // to store each subset
        for(int i=0;i<n;i++) {
            if(Knowbit(mask,i)==1) {
                v.push_back(a[i]);
            }
        }
        ans.push_back(v);
    }
    sort(ans.begin(),ans.end());
    for(auto i:ans) {
        for(auto j:i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
