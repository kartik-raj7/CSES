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
string solve(int n,int val){
    map<int,int>mp;
    int arr[n];
    string str = "IMPOSSIBLE";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(mp.count(val-arr[i])){
           str = str = to_string(i)+" "+to_string(mp[val-arr[i]]);
        }
       mp[arr[i]]=i;
        // if(mp.find(val-arr[i])!=mp.end()){
        //   if(mp[arr[i]]==mp[val-arr[i]]){
        //     if(mp.count(arr[i])==1)
        //     return str;
        //   }
        //   else str = to_string(mp[arr[i]])+" "+to_string(mp[val-arr[i]]);
        // //   cout<<mp[arr[i]]<<" "<<mp[val-arr[i]]<<endl;
        }
    return str;
}
int main(){
int n,val;
cin>>n>>val;
cout<<solve(n,val)<<endl;
}