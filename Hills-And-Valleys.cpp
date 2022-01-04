//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

bool cost(vector<int>& arr, int i) {
	if (i== 0 or i== arr.size()-1) return false;
	return (arr[i]> arr[i-1] and arr[i]> arr[i+1]) or (arr[i]< arr[i-1] and arr[i]< arr[i+1]); 
}

void solve(){
    int n; cin>> n;
    vector<int> arr(n);
    for (int  i= 0; i<n; i++) cin>> arr[i];
	int sum= 0, ans= 0;
    for (int i= 0; i<n; i++) 
		sum+= cost(arr, i);
	ans= sum;
	for (int i= 1; i<n-1; i++) {

		int base= cost(arr, i)+ cost(arr, i-1) + cost(arr, i+1);
		int old= arr[i];
		arr[i]= arr[i-1];
		ans= min(ans, sum- base+ cost(arr, i)+ cost(arr, i-1)+ cost(arr, i+1));
		arr[i]= arr[i+1];
		ans= min(ans, sum- base+ cost(arr, i)+ cost(arr, i-1)+ cost(arr, i+1));
		arr[i]= old;
	}
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

