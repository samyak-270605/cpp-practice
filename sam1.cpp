// 2228B
// Input:-

// 4
// 2 1 2 0
// 4 3 2 1
// 4 2 3 1
// 16 8 4 2

// Output:-

// 1
// 2
// 2
// 6

#include<bits/stdc++.h>     
using namespace std;
using ll = long long;

void solve() {
    int n, x1, x2, k;
    cin>>n>>x1>>x2>>k;

    if(n == 2 || n == 3){
        cout<<1<<endl;
        return;
    }
    int res = min(abs(x2-x1), n - abs(x2 - x1)) + k;
    cout<<res<<endl;
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