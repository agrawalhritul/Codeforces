//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    long long n; cin>> n;
    vector<long long> arr(n);
    for (long long i= 0; i<n; i++) cin>> arr[i];
    vector<long long > prefix(n), suffix(n);
	for (long long i= 0; i<n; i++) {
		arr[i]= !(arr[i]);
		prefix[i]= arr[i];
		if (i> 0) prefix[i]= (prefix[i]) & (prefix[i-1]);
	}
	for (long long i= n-1; i>= 0; i--) {
		if (i< n-1) suffix[i]= (suffix[i])&(suffix[i+1]);
	}
	long long res= 0, max= 0, maxIdx= -1;
	for (long long i= 0; i<n; i++) {
		res= arr[i];
		if (i>0) res= res&(prefix[i-1]);
		if (i<n-1) res= res&(suffix[i+1]);
		if (res>= max) {
			max= res;
			maxIdx= i;
		}
	}
	swap(arr[0], arr[maxIdx]);
	for (long long& i: arr) cout<<!i<<" ";
	cout<<endl;
    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();   
    return 0;
}
