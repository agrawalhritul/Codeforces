//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    long long n, k; cin>> n>> k;
    vector<long long> arr(n);
    for (long long i= 0; i<n; i++) cin>> arr[i];
    sort(arr.begin(), arr.end());
	long long ind= (n)/2, count= 0;
	for (long long i= ind+1; i<n and k; i++) {
		long long diff= arr[i]- arr[ind];
		long long add= min((diff*(i-ind)), k);
		k-= add;
		arr[ind]+= add/(i-ind);
	}
	arr[ind]+= k/((n+1)/2);
	cout<<arr[ind]<<endl;
    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
