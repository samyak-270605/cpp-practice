// 2217C
// Input:-

// 10
// 1 1 1 1
// 2 2 1 1
// 4 2 2 1
// 6 9 6 7
// 67 42 42 67
// 3411 4134 32 23
// 90234 143124 232 323
// 69387963 98793214 9791 4324786
// 985865 578977 899368 447605
// 1000000000 1000000000 1000000000 1000000000

// Output:-

// YES
// YES
// NO
// NO
// YES
// NO
// NO
// NO
// YES
// NO

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if(__gcd(n,a) == 1 && __gcd(m,b) == 1 && __gcd(n,m) <= 2)
        cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}