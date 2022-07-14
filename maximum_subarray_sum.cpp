////using dp tabulation;
#include <iostream>
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
// int solve(vector<int>&arr,vector<int>&dp,int i){
//     int ans = 0;
//     if(i==0)return arr[i];
//     if(dp[i]!=-1)return dp[i];
//     int take = max(arr[i],arr[i]+solve(arr,dp,i-1));
//     return dp[i]=take;
//     return ans = max(ans,dp[i]);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     vector<int> dp(n,-1);
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }

//     solve(arr,dp,n-1);
//     for(int i=n;i>0;i--){
//         cout<<dp[i]<<" ";
//     }
// }
/////////////tabulated dp
int main(){
    int n;
    cin>>n;
    ll arr[n];
    vector<ll>dp(n+1,0);
    loop(i,0,n){
        cin>>arr[i];
    }
    ll ans = -2147483648;
    dp[0] = arr[0];
    for(int i=1;i<n;i++){
        dp[i] = max(arr[i],arr[i]+dp[i-1]);
    }
    for(int i=0;i<n;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
}