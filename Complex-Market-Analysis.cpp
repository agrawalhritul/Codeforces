//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

bool isPrime(int n) {
	for (int i= 2; i*i<=n; i++) {
		if (n%i== 0) return false;
	}
	return true;
}

void solve(){
    int n, e; cin>> n>> e;
    vector<int> arr(n);
    int res= 0;
    for (int i= 0; i<n; i++) cin>> arr[i];
    vector<int> prefixOne(n, 0), suffixOne(n, 0);
	for (int i= 0; i<n; i++) {
		if (arr[i]== 1) prefixOne[i]= 1;
		if (i>=e) prefixOne[i]+= prefixOne[i-e];
	}
	for (int i= n-1; i>=0; i--) {
		if (arr[i]== 1) suffixOne[i]= 1;
		if (i+e<n) suffixOne[i]+= suffixOne[i+e];
	}
	int left, right;
	for (int i= 0; i<n; i++) {
		if (arr[i]>1 and isPrime(arr[i])) {

			left= 1, right= 0;
			if (i>=e) left+= prefixOne[i-e];
			if (i+e<n) right= suffixOne[i+e];
			res+= (left* right) + (left>1?1:0);

		}
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
