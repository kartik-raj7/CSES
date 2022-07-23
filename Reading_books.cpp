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
int main(){
    ll n;
    cin>>n;
    // ll arr[n];
    ll x;
    ll ans = -1;
    ll sum = 0;
    loop(i,0,n){
        cin>>x;
        sum+=x;
        ans=max(x,ans);

    }
    if(ans>(sum-ans)){
        cout<<2*ans<<endl;
    }
    else cout<<sum<<endl;}

    // ll ans = accumulate(arr,arr+n,0);
    // ll maxi = *max_element(arr,arr+n);
    // // for(ll i=0;i<n;i++){
    // //     // if(arr[i]<arr[n-i-1]){
    // //     //     ans+=arr[n-i-1];
    // //     // }
    //     // if(arr[i]>ans-arr[i]){
    //     //     ans=2*arr[i];
    //     // }
    // // }
    // if(maxi>(ans-maxi)){
    //     cout<<2*maxi<<endl;
    // }
    // else{cout<<ans<<endl;}
// }