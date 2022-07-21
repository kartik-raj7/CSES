#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <stdlib.h>
#include <set>
#include <limits>
#include <iomanip>
#define pb push_back
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <string.h>
#include <string>
#define MOD 1000000007
#define pn puts("NO");
#define py puts("YES");
#define test ll t; cin>>t; while(t--)
#define ll long long
#define loop(i,l,h) for(ll i=(l);i<(h);i++)
using namespace std;
// // int solve(int i,int target,vector<vector<int>>&dp,int arr[]){
// //     if(i==0)return arr[0]==target;
// //     if(target==0)return 1;
// //     if(dp[i][target]!=-1)return dp[i][target];
// //     int ntk = solve(i-1,target,dp,arr);
// //     int tk =0;
// //     if(arr[i]<=target){
// //          tk=solve(i-1,target-arr[i],dp,arr);
// //     }
// //     return dp[i][target]=tk+ntk;
// // }
int main(){
ios_base::sync_with_stdio(0);
	cin.tie(0);
ll n,target;
cin>>n>>target;
unordered_map<ll,int>mp;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// ll s = count(arr,arr+n,target);
// // if(s==n){
// //     cout<<n<<endl;
// //     return 0;
// // }
// // if(s==n-1){
// //     cout<<n-1<<endl;
// //     return 0;
// // }

// // if(s==n-1||s==n){
// //     cout<<n<<endl;
// //     return 0;
// // }
// // vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
// // cout<<solve(n-1,target,dp,arr)<<endl;
// ll sum = 0;
ll curr_sum = 0;
ll k = 0;
mp[0] = 1;
for(auto i:arr){
    curr_sum+=i;
    k+= mp[curr_sum-target];
    mp[curr_sum]++;
    // if(curr_sum==target){
    //     k++;
    // }
    // if(mp.find(curr_sum-target)!=mp.end()){
    //     k+= mp[curr_sum-target];
    //       }
    // mp[curr_sum]++;
}
cout<<k<<endl;
}
// int main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int N, X;
// 	cin >> N >> X;
// 	vector<int> T(N);
// 	for (int i = 0; i < N; i++) {
// 		cin >> T[i];
// 	}

// 	long long prefix_sum = 0;
// 	long long ans = 0;
// 	map<long long, int> sums;
// 	sums[0] = 1;
// 	for (int x : T) {
// 		prefix_sum += x;
// 		ans += sums[prefix_sum - X];
// 		sums[prefix_sum]++;
// 	}
// 	cout << ans << endl;
// }