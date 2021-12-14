//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7


void solve(){
    int n, k; cin>> n>> k;
    vector<pair<int, int>> arr(n);
    for (int i= 0; i<n; i++) {
        int x; cin>> x;
        arr[i]= {x, i};
    }
    sort(arr.begin(), arr.end());
    int res= 0;
    unordered_map<int, int> map;
    for (auto x: arr) {
        map[x.first]++;
    }
    for (auto x: map) res+= min(x.second, k);
    res= ((int)res/k)*k;

    vector<int> result(n, 0);
    int present= 1, color= 1, total= 0;
    result[arr[0].second]= color++;
    total++;

    for (int i= 1; i<n and total<res; i++) {
        if (arr[i].first== arr[i-1].first) present++;
        else present= 1;

        if (present<= k) {
            if (color>k) color= 1;
            result[arr[i].second]= color++;
            total++;
        }
    }

    for (int i: result)
        cout<<i<<" ";
    cout<<endl;

    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int test;
    cin>>test;
    for (int i= 0; i<test; i++) {
        //cout<<"Case #"<<i+1<<": ";
        solve();
    }   
    return 0;
}