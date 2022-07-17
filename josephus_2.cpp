#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
signed main(){
  int n,k;
  cin >> n  >> k;
  int p =k%n ; ordered_set<int>a ;
  for(int i=1;i<=n;i++)
    a.insert(i) ;
  while(a.size()){
    int r = *a.find_by_order(p) ;
    a.erase(r) ;
    if(a.size())
      p=(p+k)%a.size() ;
    cout << r << " " ;
  }
}






// #include <bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <iostream>
// #include <algorithm>
// #include <numeric>
// #include <vector>
// #include <stdlib.h>
// #include <set>
// #include <limits>
// #include <iomanip>
// #define pb push_back
// #include <map>
// #include <unordered_map>
// #include <unordered_set>
// #include <string.h>
// #include <string>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
// // #include <ext/pb_ds/assoc_container.hpp>
// // #include <ext/pb_ds/tree_policy.hpp>
// // using namespace __gnu_pbds;
// // #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #include <queue>
// #define MOD 1000000007
// #define pn puts("NO");
// #define py puts("YES");
// #define test ll t; cin>>t; while(t--)
// #define ll long long
// #define loop(i,l,h) for(ll i=(l);i<=(h);i++)
// using namespace __gnu_pbds;
// using namespace std;
// signed main(){
//     //we can basically use ordered sets which are same as set but have an additional functionality
//     //of finding kth element
//     int n,k;
//     cin>>n>>k;
//     int a = k%n;
//     ordered_set<int> s;
//     for(int i=1;i<=n;i++){
//         s.insert(i);}
//         while(s.size()){
//             int f = *s.find_by_order(a);
//             s.erase(f);
//             if(s.size()){
//                 a=(a+k)%s.size();
//                 cout<<f<<" ";
//             }
//     }
// }
    ///good code but tc will be more
    // queue<ll>q;
    // vector<ll int>v;
    // ll n,k;
    // cin>>n>>k;
    // for(ll i=1;i<=n;i++){
    //     q.push(i);
    // }
    // ll div = 0;
    // if(k>=n){
    // div = k;
    // }
    // else div =k+1;
    // ll i=0;
    // while(q.size()!=1){
    //     i++;
    //     if(i%div!=0){
    //         q.push(q.front());
    //         q.pop();
    //     }
    //     else {v.push_back(q.front());
    //     q.pop();
    // }
    // }
    // v.pb(q.front());
    // q.pop();
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // for(ll i:v){
    //     cout<<i<<" ";
    // }