//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void solve(){
    int n, k; cin>> n>> k;
    vector<string> arr(n);
    unordered_set<string> isThere;
    int all= 'S' + 'E' + 'T';
    for (int i= 0; i<n; i++) {
    	cin>> arr[i];
    	isThere.insert(arr[i]);
    }
    string temp(k, 'X');
    int res= 0;	
	for (int i= 0; i<n-1; i++) {
		for (int j= i+1; j<n; j++) {
			for (int a= 0; a<k; a++) {
				if (arr[i][a]== arr[j][a]) temp[a]= arr[i][a];
				else temp[a]= all- arr[j][a]- arr[i][a];
			}
			res+= isThere.count(temp);
		}
	}
	cout<<res/3<<endl;

    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
