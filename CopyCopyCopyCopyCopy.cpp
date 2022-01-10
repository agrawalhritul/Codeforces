//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int n; cin>>n;
    set<int> set;
    for (int i= 0; i<n; i++) {
    	int x; cin>> x;
    	set.insert(x);
    }
    cout<<set.size()<<endl;

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
