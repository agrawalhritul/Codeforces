//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

bool allTrue(vector<bool>& arr) {
	for (int i= 0; i<arr.size(); i++)
		if (arr[i]== false) 
			return false;
	return true;
}

void solve(){
    int n; cin>> n;
    vector<int> arr(n);
    for (int i= 0; i<n; i++) cin>> arr[i];
    vector<bool> prefix(n, false);
	vector<bool> suffix(n, false);
	for (int i= 0; i<n; i++) {
		if (arr[i]<i) break;
		prefix[i]= true;
	}
	for (int i= 0; i<n; i++) {
		if (arr[n-1-i]<i) break;
		suffix[n-1-i]= true;
	}
	bool possible= false;
	possible= allTrue(prefix) or allTrue(suffix);
	if (possible== false) {
		for (int i= 0; i<n; i++) {
			if (prefix[i] and suffix[i]) {
				possible= true;
				break;
			}
		}
	}
	if (possible) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
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