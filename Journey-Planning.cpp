//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
	long long n; cin>> n;
	vector<long long> arr(n);
	for (long long i= 0; i<n; i++) {
		cin>> arr[i];
	}    
	unordered_map<long long, long long> map_pos, map_neg;
	for (long long i= 0; i<n; i++) {
		if (arr[i]- i>= 0) {
			map_pos[arr[i]- i]+= arr[i];
		} 
		else map_neg[i- arr[i]]+= arr[i];
	}
	long long res= 0;
	for (auto x: map_neg) res= max(res, x.second);
	for (auto x: map_pos) res= max(res, x.second);
		cout<<res<<endl;
    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
       
    return 0;
}
