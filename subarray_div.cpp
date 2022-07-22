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
#define loop(i,l,h) for(ll i=(l);i<=(h);i++)
using namespace std;
int main(){
    int n;
    cin>>n;
    ll arr[n];
    unordered_map<ll,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
ll sum=0;
vector<ll>ans(n,0);
ll c=0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
      ans[((sum%n)+n)%n]++;	
    }
    for(int i=0;i<n;i++){
        if(ans[i]>1){
            c+=(ans[i]*(ans[i]-1)/2);
        }
    }
    c+=ans[0];
    cout<<c<<endl;
    //   if(sum%n==0){
    //     c++;
    //   }
    //   if(mp.find(sum%n)!=mp.end()){
    //     c+=mp[sum%n];
    //   }
    //   mp[sum]++;
    // }
    // cout<<c<<endl;
}