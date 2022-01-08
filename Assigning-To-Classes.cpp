//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int n; cin>>n;
    n= n*2;
    vector<int> arr(n);
    for (int i= 0; i<n; i++) cin>> arr[i];
    sort(arr.begin(), arr.end());
	int res= arr[n/2]- arr[n/2 - 1];
    cout<<res<<endl;

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
