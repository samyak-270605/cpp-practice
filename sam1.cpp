// Input:-

// 6
// 4 6
// 10 14
// 15 15
// 7 12
// 7000000000000000 10487275715782582
// 1000000000000000000 1000000000000000000

// Output:-

// Bob
// Bob
// Alice
// Alice
// Bob
// Alice

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll p,q;
        cin>>p>>q;
        if(p < q && (min(p/2, q/2) >=  (q-p))) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}