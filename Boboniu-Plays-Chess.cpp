//                                                    HRITUL AGRAWAL                                                    

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mod 1000000007 //10e9+7

void print(vector<pair<int, int>>& visited, int x, int y) {
	for (auto k: visited) {
		if (k.first== x and k.second== y) return;
	}
	cout<<x+1<<" "<<y+1<<endl;
}

void solve(){
    int m, n, x, y; cin>> m>> n>> x>> y;
    x--, y--;
    int total= m*n;
    vector<pair<int, int>> visited;
    visited.push_back({x, y});

    if (x== 0 and y!= 0) visited.push_back({0, 0});
	else if (x!= 0 and y== 0) visited.push_back({0, 0});
    else {
    	visited.push_back({0 ,y});
    	visited.push_back({0, 0});
    }
    x= 0, y= 0;
	for (auto x: visited) 
		cout<<x.first+1<<" "<<x.second+1<<endl;
    
   	bool leftToRight= true;
   	for (int i= 0; i< m; i++) {
   		if(leftToRight) {
   			for (int j= 0; j< n; j++) {
   				x= i, y= j;
   				print(visited, x, y);
   			}
   			leftToRight= false;
   		}
   		else {
   			for (int j= n-1; j>= 0; j--) {
   				x= i, y= j;
   				print(visited, x, y);
   			}
   			leftToRight= true;
   		}
   	}


    return;
 }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
