// 2217B
// Input:-

// 4
// 3 1
// 0 1 0
// 2
// 5 1
// 1 1 1 1 1
// 1
// 6 1
// 0 1 0 1 0 1
// 3
// 17 1
// 0 1 1 0 1 1 0 1 0 0 1 0 1 0 1 0 1
// 5

// Output:-

// 2
// 0
// 4
// 10

#include<bits/stdc++.h>     
using namespace std;
using ll = long long;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &x : arr) cin>>x;
    int idx;
    cin>>idx;
    idx = idx-1;
    int flip = 0;

    int l = 0, r = n-1;
    while(l <= idx || r >= idx){
        while(l < idx && (((flip % 2 == 0) && arr[l] == arr[idx]) || 
                ((flip % 2 == 1) && arr[l] != arr[idx]))) l++;
        
        while(r > idx && (((flip % 2 == 0) && arr[r] == arr[idx]) || 
                ((flip % 2 == 1) && arr[r] != arr[idx]))) r--;

        bool changed = false;
        if(l < idx){
            flip++;
            changed = true;
            l++;
        }
        else if(l == idx){
            if(flip % 2 == 1){
                flip++;
                changed = true;
            }
            l++;
        }

        if(r > idx){
            if(!changed) flip++;
            r--;
        }
        else if(r == idx){
            if(flip % 2 == 1){
                if(!changed) flip++;
            }
            r--;
        }
    }
    cout<<flip<<endl;
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