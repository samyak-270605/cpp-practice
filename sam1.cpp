// Input:-

// 6
// 3 2 6
// LLR
// 2 -1 8
// RL
// 4 -2 5
// LRRR
// 5 3 7
// LRRLL
// 1 1 1
// L
// 3 -1 4846549234412827
// RLR

// Output:-

// 1
// 4
// 1
// 0
// 1
// 2423274617206414

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            x += (s[i] == 'L' ? -1 : 1);
            k--;
            if(!x) break;
        }
        ll res = 0;
        if(!x){
            res = 1;
            for(int i=0; i<n; i++){
                x += (s[i] == 'L' ? -1 : 1);
                if(!x){
                    res += k/(i+1);
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}