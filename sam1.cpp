// Input:-

// 7
// 1 1
// 2 1
// 0 3
// 3 4
// 0 2
// 1 0
// 4 7

// Output:-

// YES
// 1 2
// NO
// YES
// 1 2
// 1 3
// YES
// 1 2
// 2 3
// 3 4
// 4 5
// 5 6
// 6 7
// NO
// NO
// YES
// 1 2
// 2 3
// 3 4
// 4 5
// 4 11
// 2 6
// 6 7
// 7 8
// 2 9
// 9 10


#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int x,y;
        cin>>x>>y;
        
        int n = x + y;
        int d = y - x;

        if((x == 0 && n%2 == 0) || n/2 < x){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;

        int endNode = 2*x + (d % 2);
        for(int i=2; i<=endNode; i++){
            cout<<i-1<<" "<<i<<endl;
        }

        for(int i=endNode+1; i<=n; i++){
            cout<<endNode<<" "<<i<<endl;
        }
    }
    return 0;
}