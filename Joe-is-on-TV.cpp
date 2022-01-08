//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int n; cin>> n;
    double ans= 0.0;
    for (int i= 1; i<=n; i++) {
    	ans+= 1.0/i;
    }
    cout<<setprecision(10)<<ans<<endl;

    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
