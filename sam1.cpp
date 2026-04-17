// Input:-

// 4
// 2 1 2 42
// 42 1
// 3 3 2 6
// 2 1 2
// 3 2 2 6
// 2 1 2
// 8 4 7 10
// 3 4 4 2 1 1 4 2

// Output:-

// 0
// 6
// 2
// 1



#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n,k,p,m;
        cin>>n>>k>>p>>m;
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++) cin>>arr[i];
        int res = 0;
        if(p <= k){
            if(m < arr[p]){
                cout<<res<<endl;
                continue;
            }
            else{
                m -= arr[p];
                res++;
            }
        }
        else{
            vector<int> temp;
            for(int i=1; i<p; i++) temp.push_back(arr[i]);
            sort(temp.rbegin(), temp.rend());
            for(int i=k-1; i<temp.size(); i++) m -= temp[i];
            m -= arr[p];
            if(m < 0){
                cout<<res<<endl;
                continue;
            }
            else res++;
        }

        vector<int> sorted;
        for(int i=1; i<=n; i++){
            if(i == p) continue;
            sorted.push_back(arr[i]);
        }

        sort(sorted.rbegin(), sorted.rend());
        int req = 0;
        for(int i=k-1; i<n-1; i++) req += sorted[i];
        req += arr[p];

        res += m / req;
        cout<<res<<endl;
    }

    return 0;
}