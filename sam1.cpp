// Input:-

// 3
// 3
// 000
// 2
// 10
// 3
// 101

// Output:-

// Bob
// Alice
// 2
// 1 2 
// Alice
// 2
// 1 2 

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp = s;
        sort(temp.begin(), temp.end());
        if(temp == s) cout<<"Bob"<<endl;
        else{
            vector<int> m;
            for(int i=0; i<n; i++){
                if(s[i] != temp[i]) m.push_back(i+1);
            }

            cout<<"Alice"<<endl;
            cout<<m.size()<<endl;
            for(int it : m) cout<<it<< " ";
            cout<<endl;
        }
    }
    return 0;
}