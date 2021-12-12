//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

int findParent(int v, vector<int>& parent) {
    if (parent[v]== v) return v;
    return parent[v]= findParent(parent[v], parent);
}

void merge(int a, int b, vector<int>& parent, vector<int>& size_) {
    a= findParent(a, parent);
    b= findParent(b, parent);
    if (a!=b) {
        if (size_[a]< size_[b]) swap(a, b);
        parent[b]= a;
        size_[a]+= b;
    }
}

void solve(){
    int n, m1, m2;
    cin>> n>> m1>> m2;

    vector<int> parent1(n, 0), parent2(n, 0);
    vector<int> size1(n, 1), size2(n, 1);

    for (int i= 0; i<n; i++) parent1[i]= i, parent2[i]= i;
    for (int i= 0; i<m1; i++) {
        int u, v; cin>> u>> v;
        u--, v--;
        merge(u, v, parent1, size1);
    }
    for (int i= 0; i<m2; i++) {
        int u, v; cin>> u>> v;
        u--, v--;
        merge(u, v, parent2, size2);
    }

    vector<pair<int, int>> ans;

    for (int i= 0; i<n; i++) {
        for (int j= i+1; j<n; j++) {
            int a1= findParent(i, parent1);
            int a2= findParent(i, parent2);
            int b1= findParent(j, parent1);
            int b2= findParent(j, parent2);
            if (a1!= b1 and a2!= b2) {
                merge(i, j, parent1, size1);
                merge(i, j, parent2, size2);
                ans.push_back({i+1, j+1});
            }
        }

    }
    cout<<ans.size()<<endl;
    for (auto x: ans) 
        cout<<x.first<<" "<<x.second<<endl;

    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
