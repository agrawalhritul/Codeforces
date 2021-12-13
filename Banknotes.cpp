//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7



void solve(){
   	long long n, k; cin>> n>> k;
   	vector<long long> arr(n);
   	k++;
   	for (long long i= 0; i<n; i++) cin>> arr[i];
   	long long ans= 0;
   	for (long long i= 0; i<n-1; i++) {
   		long long allowed= ((pow(10, arr[i+1]))/(pow(10, arr[i]))) -1;
   		long long tbd= min(k, allowed);
   		ans+= tbd*(pow(10, arr[i]))*1LL;
   		k-= tbd;
   	} 
   	if (k>0) ans+= k*(pow(10, arr[n-1]));
   	cout<<ans<<endl;

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
