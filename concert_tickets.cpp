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
int main(){
    ll n,m;
    cin>>n>>m;
    multiset<ll>mp;
    vector<int> ans(m,-1);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp.insert(x);
    }
    for(int j=0;j<m;j++){
        int y;
        cin>>y;
        auto it = mp.upper_bound(y);
        if(it==mp.begin())cout<<-1<<endl;
        else{
            cout<<*(--it)<<endl;
            // ans[j] = *(--it);//because pointers follow 1 based indexing so we predecrement
            mp.erase(it);
        }
    }
    // for(int i=0;i<m;i++){
    //      cout<<ans[i]<<endl;
}
///////////////////////////////////////////
// int main(){
//    ll n,m;
//    cin>>n>>m;
//    map<ll,ll>mp;
//    vector<ll> arr;
//    multiset<ll>mp;
// //    int arr[n];
//    ll brr[m];
//    loop(i,0,n){
//     int aux;
//     cin>>aux;
//     arr.push_back(aux);
//     mp[aux]++;
//    }
//    sort(arr.begin(),arr.end());
//    int c=0;
//    vector<ll>v(m,-1);
//    for(ll i=0;i<m;i++){
//       cin>>brr[i];
//     //   auto it = find(arr.begin(),arr.end(),brr[i]);
//     //   if(it!=arr.end()){
//     //     if(mp[brr[i]]>0){
//     //     v[i] = brr[i];
//     //     mp[brr[i]]--;
//     //   }
//     //   }
//     //   if(arr.find(arr.begin(),arr.end(),brr[i])!=arr.end()){
//     //   else{
//       ll x = upper_bound(arr.begin(),arr.end(),brr[i])-arr.begin();
//     //   cout<<x<<endl;
//       if(mp[arr[--x]]>0){
//         cout<<arr[--x]<<endl;
//         //  v[i] = arr[x-1];
//          mp[arr[x-1]]--;
//       }
//       else cout<<-1<<endl;
//    }
// }
//    for(ll i=0;i<m;i++){
//     cout<<v[i]<<endl;
//    }