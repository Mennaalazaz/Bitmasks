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
int Setbit(int n,int i) { // turn bit to 1
    return n|(1<<i);
}
int Resetbit(int n,int i) { // turn bit to 0
    return n& (~(1<<i));
}
// second way
bool ispowerof2(int n) {
    if(n==0) return 0;
    return ! (n & (n-1)); // not is to turn 0 returned into 1 to return true
}
void solve() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    for(int mask=0;mask<=(1<<n)-1;mask++) {
        ll Even=0,Odd=0;
        for(int i=0;i<n;i++) {
            if(Knowbit(mask,i)==1) {
                // To check even or odd make (&1)
                if(a[i]&1) {  // if true answer is Odd
                    Odd++;
                }
                else { // else answer is even
                    Even++;
                }
            }
        }
        if (Even>Odd) {
            cnt++;
        }
    }
    cout<<cnt;

}

int main() {
    fastIO();
    solve();
    return 0;
}
