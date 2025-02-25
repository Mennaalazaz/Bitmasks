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
    int q,n; cin>>n>>q;
    while(q--) {
        int op; cin>>op;
        if(op==1) {
            for(int i=0; i<32; i++) {
                if(Knowbit(n,i)==0) {
                    n=Setbit(n,i);
                    break;}}
            cout<<n<<"\n";
        }
        else if(op==2) {
            for(int i=0; i<32; i++) {
                if(Knowbit(n,i)==1) {
                    n=Resetbit(n,i);
                    break;}}
            cout<<n<<"\n";
        }
        else if(op==3) {
            if(n==0) n=-1;
            else {
                for(int i=0; i<32; i++) {
                    if(Knowbit(n,i)==1) break;
                    n=Setbit(n,i);}}
            cout<<n<<"\n";
        }
        else if(op==4) {
            for(int i=0; i<32; i++) {
                if(Knowbit(n,i)==0) break;
                n=Resetbit(n,i);}
            cout<<n<<endl;
        }
        else {
            // First Way
            // __builtin_popcount(n) : built in function that count the 1s bits in binary representation
            // use  __builtin_popcountl(n) : if n was long long
            if(__builtin_popcount(n)==1) cout<<"is power of two"<<endl;
            else cout<<"not power of two"<<endl;
        }}}

int main() {
    fastIO();
    solve();
    return 0;
}
