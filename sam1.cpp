// 2206K
// Input:-

// 4
// 10
// 0123456789
// 11
// 00123456789
// 8
// 99111111
// 4
// 1234

// Output:-

// 1
// 2
// 2
// 0

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    
    vector<int> freq(10,0);
    for(char ch : s) freq[ch - '0']++;

    int s5 = 0;
    for(int i=0; i<=5; i++) s5 += freq[i];
    int max_k = n/4;
    max_k = min(max_k, s5 / 2);
    max_k = min(max_k, freq[0] + freq[1] / 2);
    max_k = min(max_k, (s5 + freq[0]) / 3);

    cout<<max_k<<endl;
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