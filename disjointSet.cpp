#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
  private:
   vector<int> parent,rank,size;
public:
    DisjointSet(int n){
    parent.resize(n+1);
    size.resize(n+1);
    rank.resize(n+1,0);
    for(int i=0; i<=n; i++){
      parent[i] = i;
      size[i] = 1;
    }
  };

  int findPar(int node){
    if(parent[node] == node) return node;
    return parent[node] = findPar(parent[node]);
  }

  void unionByRank(int u, int v){
    int ul_pu = findPar(u);
    int ul_pv = findPar(v);
    if(ul_pu == ul_pv) return;
    if(rank[ul_pu] < rank[ul_pv])
      parent[ul_pu] = ul_pv;
    else if(rank[ul_pv] < rank[ul_pu])
      parent[ul_pv] = ul_pu;
    else{
      parent[ul_pv] = ul_pu;
      rank[ul_pu]++;
    }
  }

  void unionBySize(int u, int v){
    int ul_pu = findPar(u);
    int ul_pv = findPar(v);
    if(ul_pu == ul_pv) return;
    if(size[ul_pu] < size[ul_pv]){
      parent[ul_pu] = ul_pv;
      size[ul_pv] += size[ul_pu];
    }
    else{
      parent[ul_pv] = ul_pu;
      size[ul_pu] += size[ul_pv];
    }
  }

};

int main(){
  DisjointSet ds(7);
  ds.unionBySize(1,2);
  ds.unionBySize(2,3);
  ds.unionBySize(4,5);
  ds.unionBySize(6,7);
  //ds.unionBySize(3,7);
  if(ds.findPar(3) == ds.findPar(7)) cout<<"True";
  else cout<<"False";
  return 0;
}