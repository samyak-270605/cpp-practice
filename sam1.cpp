// 2211C1
// Input:-

// 4
// 5 5
// 1 2 3 4 5
// 3 1 5 2 4
// 5 4
// 4 1 2 5 3
// 2 -1 -1 -1 -1
// 6 4
// 1 2 4 3 5 6
// -1 -1 3 -1 -1 -1
// 6 4
// 1 2 4 3 5 6
// -1 -1 3 3 -1 -1

// Output:-

// YES
// NO
// YES
// NO

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,k;
    cin>>n>>k;
    
    vector<int> a(n + 1);
    vector<int> mpp(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mpp[a[i]] = i;
    }

    vector<int> b(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }

    vector<int> test(n + 1, 0); 
    
    for(int i = 1; i <= n; i++){
        int el = b[i];
        if(el != -1) {
            if(test[el] != 0){
                cout << "NO"<<endl;
                return;
            }
            test[el] = i;
        }
    }

    int L = n - k;
    for(int i=1; i<=n; i++){
        if(test[i] == 0) continue;
        int b = i;
        int idxB = test[i];
        int idxA = mpp[b];
        if(idxA == idxB) continue;

        if(idxA <= L || idxA > k || idxB <= L || idxB > k){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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