//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
   	int n; cin>> n;
   	vector<int> a(n), b(n);
   	vector<int> suffix(n+1);
   	for (int i= 0; i<n; i++) cin>> a[i];
   	for (int i= 0; i<n; i++) {
   		cin>> b[i];
   		suffix[(b[i])/2]= i;
   	}
   	for (int i= n-1; i>0; i--) suffix[i]= min(suffix[i], suffix[i+1]);
   	int res= INT_MAX;
   	for (int i= 0; i<n; i++) {
   		int x= a[i];
   		int y= (a[i]+1)/2;
   		res= min(res, i+suffix[y]);
   	}
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
